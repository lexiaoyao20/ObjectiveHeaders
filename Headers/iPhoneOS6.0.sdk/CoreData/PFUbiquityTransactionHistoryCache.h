/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, PFUbiquityLocation, NSMutableArray, NSRecursiveLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionHistoryCache : XXUnknownSuperclass {
@private
	NSString* _localPeerID;
	PFUbiquityLocation* _rootLocation;
	NSMutableDictionary* _peerIDToHistoryArray;
	NSMutableDictionary* _globalIDToHistoryArray;
	NSRecursiveLock* _peerIDToHistoryArrayLock;
	NSMutableArray* _entriesToWrite;
}
-(id)init;
-(id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;
-(BOOL)addTransactionEntries:(id)entries error:(id*)error;
-(BOOL)addTransactionEntry:(id)entry error:(id*)error;
-(BOOL)addTransactionEntryLight:(id)light needsWrite:(BOOL)write error:(id*)error;
-(BOOL)cacheTransactionHistory:(id*)history;
-(id)cachedTransactionHistoryForGlobalID:(id)globalID;
-(void)dealloc;
-(id)description;
-(BOOL)purgeCache:(id*)cache;
-(BOOL)writePendingEntries:(id*)entries;
@end

