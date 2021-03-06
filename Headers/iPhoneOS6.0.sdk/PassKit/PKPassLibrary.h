/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCProxyTarget.h"
#import "PKPassLibraryProxy.h"

@class PKImageSetCache, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKPassLibrary : XXUnknownSuperclass <XPCProxyTarget, PKPassLibraryProxy> {
@private
	id _passesStoreProxy;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	NSObject<OS_xpc_object>* _connection;
	PKImageSetCache* _imageSetCache;
}
+(BOOL)isPassLibraryAvailable;
-(id)init;
-(id)_existingCardInfoAndSettings:(id)settings;
-(void)addFakeBulletin;
-(id)bulletinDictWithRecordID:(id)recordID;
-(id)bulletinDictsForPassTypeIdentifier:(id)passTypeIdentifier count:(unsigned)count sinceDate:(id)date;
-(id)bulletinSectionInfoForRecordID:(id)recordID;
-(void)cardAddedWithUniqueID:(id)uniqueID;
-(void)cardChangedWithUniqueID:(id)uniqueID;
-(void)cardRemovedWithUniqueID:(id)uniqueID;
-(id)cardWithBundleID:(id)bundleID identifier:(id)identifier;
-(id)cardWithUniqueID:(id)uniqueID;
-(void)cardsWithHandler:(id)handler;
-(void)clearBulletinRecordsForPassTypeIdentifier:(id)passTypeIdentifier beforeDate:(id)date;
-(BOOL)containsPass:(id)pass;
-(void)dealloc;
-(id)diffForBulletinRecordID:(id)bulletinRecordID;
-(void)establishPassesStoreConnection;
-(void)fetchCardFromServerWithUniqueID:(id)uniqueID handler:(id)handler;
-(void)fetchContentForCardUniqueID:(id)cardUniqueID withCompletion:(id)completion;
-(void)fetchImageSet:(int)set forCardUniqueID:(id)cardUniqueID displayProfile:(id)profile withCompletion:(id)completion;
-(void)flushReferencedUniqueID:(id)anId forCachedImageSet:(int)cachedImageSet withDisplayProfile:(id)displayProfile;
-(void)ingestCardData:(id)data settings:(int)settings completionHandler:(id)handler;
-(void)noteAccountChangedWithCompletion:(id)completion;
-(void)nukeDatabaseAndExit;
-(id)orderedUniqueIDs;
-(id)passWithPassTypeIdentifier:(id)passTypeIdentifier serialNumber:(id)number;
-(id)passes;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)removeCardWithUniqueID:(id)uniqueID;
-(void)removePass:(id)pass;
-(BOOL)replacePassWithPass:(id)pass;
-(void)setAllowRelevantPasses:(BOOL)passes;
-(void)tearDownPassesStoreConnection;
-(void)updateCardSettings:(int)settings forCardWithUniqueID:(id)uniqueID completionHandler:(id)handler;
@end

