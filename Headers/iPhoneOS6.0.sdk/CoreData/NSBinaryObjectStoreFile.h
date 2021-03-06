/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : XXUnknownSuperclass {
@private
	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;
}
-(BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id*)error;
-(void)clearCurrentValues;
-(int)databaseVersion;
-(void)dealloc;
-(id)fullMetadata;
-(id)mapData;
-(unsigned long long)primaryKeyGeneration;
-(BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id*)error;
-(BOOL)readFromFile:(id)file error:(id*)error;
-(BOOL)readMetadataFromFile:(id)file error:(id*)error;
-(void)setDatabaseVersion:(int)version;
-(void)setFullMetadata:(id)metadata;
-(void)setMapData:(id)data;
-(void)setPrimaryKeyGeneration:(unsigned long long)generation;
-(BOOL)writeMetadataToFile:(id)file error:(id*)error;
-(BOOL)writeToFile:(id)file error:(id*)error;
@end

