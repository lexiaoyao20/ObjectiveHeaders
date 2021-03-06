/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface ABContactsFilter : XXUnknownSuperclass {
	void* _addressBook;
@private
	NSArray* _groups;
	NSArray* _sources;
	void* _directorySource;
	BOOL _showsAllContacts;
}
@property(readonly, assign, nonatomic) void* addressBook;
@property(readonly, assign, nonatomic) void* directorySource;	// @synthesize=_directorySource
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, assign, nonatomic) void* groupForNewRecords;
@property(readonly, assign, nonatomic) NSArray* groups;	// @synthesize=_groups
@property(readonly, assign, nonatomic) BOOL isDirectory;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) BOOL shouldChangeModelSelectionWhenDisplayed;
@property(readonly, assign, nonatomic) BOOL showsAllContacts;	// @synthesize=_showsAllContacts
@property(readonly, assign, nonatomic) void* sourceForNewRecords;
@property(readonly, assign, nonatomic) NSArray* sources;	// @synthesize=_sources
+(id)_newContactsFilterFromGroupWrapperRepresentation:(id)groupWrapperRepresentation withAddressBook:(void*)addressBook;
+(id)newContactsFilterFromDictionaryRepresentation:(id)dictionaryRepresentation withAddressBook:(void*)addressBook;
-(id)initWithAddressBook:(void*)addressBook;
-(id)initWithDirectorySource:(void*)directorySource addressBook:(void*)book;
-(id)initWithGroups:(id)groups sources:(id)sources addressBook:(void*)book;
-(void*)_defaultSourceForAccountContainingSource:(void*)accountContainingSource;
-(void)_getWritableSource:(const void**)source andGroup:(const void**)group;
-(id)_sortedRecordsForRecords:(id)records byNameProperty:(int)property;
// declared property getter: -(void*)addressBook;
-(id)copyDictionaryRepresentation;
-(void)dealloc;
-(id)description;
// declared property getter: -(void*)directorySource;
// declared property getter: -(void*)groupForNewRecords;
// declared property getter: -(id)groups;
-(unsigned)hash;
-(void)invalidateSourcesForAllContacts;
// declared property getter: -(BOOL)isDirectory;
// declared property getter: -(BOOL)isEditable;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)name;
// declared property getter: -(BOOL)shouldChangeModelSelectionWhenDisplayed;
// declared property getter: -(BOOL)showsAllContacts;
-(id)sortedGroupsForGroups:(id)groups;
-(id)sortedSourcesForSources:(id)sources;
// declared property getter: -(void*)sourceForNewRecords;
// declared property getter: -(id)sources;
@end

