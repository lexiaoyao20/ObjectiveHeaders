/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ABFavoritesEntry.h"

@class NSString;

@interface ABFavoritesEntry : XXUnknownSuperclass {
@private
	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;
}
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void*)book;
-(id)initWithPerson:(void*)person property:(int)property identifier:(int)identifier;
-(id)initWithPerson:(void*)person property:(int)property identifier:(int)identifier type:(int)type;
-(void*)ABPerson;
-(int)_abUid;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)dictionaryRepresentation:(id*)representation isDirty:(BOOL*)dirty;
-(id)displayName;
-(int)identifier;
-(BOOL)isEqual:(id)equal;
-(id)label;
-(id)nonLocalizedLabel;
-(int)property;
-(void)recheckAddressBook;
-(int)type;
-(id)value;
@end

@interface ABFavoritesEntry (Lookup)
+(void)_runLookup;
-(void)_lookupChanged:(id)changed;
-(void)_lookupNotFound;
-(void)_postEntryChanged;
-(void)_queueLookup;
-(void)_unqueueLookup;
@end
