/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString, NSArray, NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface _PFZipFileArchive : XXUnknownSuperclass {
@private
	NSDictionary* _contents;
	NSData* _data;
	id _provider;
	int _desc;
	NSString* _path;
	NSArray* _names;
	NSDictionary* _properties;
	NSMutableDictionary* _cachedContents;
	void* _reserved;
	zFlags _zFlags;
	void* _reserved2[5];
}
-(id)initWithData:(id)data options:(unsigned)options error:(id*)error;
-(id)initWithEntryNames:(id)entryNames contents:(id)contents properties:(id)properties options:(unsigned)options;
-(id)initWithEntryNames:(id)entryNames dataProvider:(id)provider options:(unsigned)options;
-(id)initWithPath:(id)path options:(unsigned)options error:(id*)error;
-(id)archiveData;
-(id)archiveStream;
-(id)contentsForEntryName:(id)entryName;
-(void)dealloc;
-(id)entryNames;
-(void)finalize;
-(void)invalidate;
-(BOOL)isValid;
-(id)propertiesForEntryName:(id)entryName;
-(id)streamForEntryName:(id)entryName;
-(BOOL)writeContentsForEntryName:(id)entryName toFile:(id)file options:(unsigned)options error:(id*)error;
-(BOOL)writeToFile:(id)file options:(unsigned)options error:(id*)error;
@end
