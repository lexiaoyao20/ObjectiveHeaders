/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSManagedObjectContext, NSPersistentStore, PFUbiquityLocation, NSString, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : XXUnknownSuperclass {
@private
	NSManagedObjectContext* _metadataMOC;
	NSPersistentStoreCoordinator* _metadataPSC;
	NSPersistentStore* _metadataStore;
	NSMutableDictionary* _peerRangeCache;
	NSMutableDictionary* _objectHistoryCache;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootURL;
	PFUbiquityLocation* _metadataStoreFileLocation;
}
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectContext* metadataMOC;	// @synthesize=_metadataMOC
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator* metadataPSC;	// @synthesize=_metadataPSC
@property(readonly, assign, nonatomic) PFUbiquityLocation* metadataStoreFileLocation;	// @synthesize=_metadataStoreFileLocation
@property(readonly, assign, nonatomic) PFUbiquityLocation* ubiquityRootURL;	// @synthesize=_ubiquityRootURL
+(id)defaultUbiquityLocationForBundleIdentifier:(id)bundleIdentifier createIfMissing:(BOOL)missing;
+(id)defaultUbiquityLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier createIfMissing:(BOOL)missing;
+(id)defaultUbiquityRootLocation;
+(id)getUbiquityModel;
+(void)initialize;
+(int)integerFromPrimaryKeyString:(id)primaryKeyString;
+(unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;
+(BOOL)shouldRecoverStackMetadataForStore:(id)store withLocalPeerID:(id)localPeerID;
-(id)init;
-(id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;
-(id)addPersistentStoreDescribedByMetadata:(id)metadata toPersistentStoreCoordinator:(id)persistentStoreCoordinator;
-(id)addPersistentStoreWithName:(id)name toPersistentStoreCoordinator:(id)persistentStoreCoordinator;
-(id)allPeers;
-(void)cachePeerRanges;
-(void)cacheTransactionHistoryWithPeerState:(id)peerState andTransactionDate:(id)date forStoreName:(id)storeName andImportingPeerID:(id)anId;
-(id)cachedTransactionEntryHistoryForLocalIDString:(id)localIDString;
-(id)createGlobalIdentifierForManagedObjectID:(id)managedObjectID withPersistentStoreCoordinator:(id)persistentStoreCoordinator;
-(id)createLocalIDURIForLocalPeerGlobalID:(id)localPeerGlobalID withPeerRangeCache:(id)peerRangeCache andStoreMetadata:(id)metadata importContext:(id)context;
-(id)createMapOfGlobalObjectIDsToLocalIDURIs:(id)localIDURIs forStoreSaveSnapshot:(id)storeSaveSnapshot withPersistentStoreCoordinator:(id)persistentStoreCoordinator andImportContext:(id)context;
-(void)createNewPeerRangesForFakeManagedObjects:(id)fakeManagedObjects withPeerEntityNameRangeStartSetDictionary:(id)peerEntityNameRangeStartSetDictionary andStoreNameToFetchedMetadata:(id)fetchedMetadata;
-(void)dealloc;
-(id)description;
-(id)importStateForStoreName:(id)storeName andPeerID:(id)anId;
-(id)importStatesMatchingStoreName:(id)name;
-(BOOL)initializeMetadataStoreWithError:(id*)error;
// declared property getter: -(id)localPeerID;
-(unsigned)localPrimaryKeyForPeerID:(id)peerID inStoreNamed:(id)storeNamed andPrimaryKey:(unsigned)key forEntityNamed:(id)entityNamed;
// declared property getter: -(id)metadataMOC;
// declared property getter: -(id)metadataPSC;
// declared property getter: -(id)metadataStoreFileLocation;
-(id)newCoordinatorForPersistentStoreName:(id)persistentStoreName;
-(id)peerForPeerID:(id)peerID createIfMissing:(BOOL)missing;
-(BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)error;
-(BOOL)purgeMetadataForStoreMetadata:(id)storeMetadata withError:(id*)error;
-(BOOL)shouldProcessTransactionLogAtLocation:(id)location error:(id*)error;
// declared property getter: -(id)ubiquityRootURL;
@end

