/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessArbiter.h"
#import </libxml2.2.h>

@class NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
@private
	NSObject<OS_xpc_object>* _server;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _presentersByID;
	NSMutableDictionary* _providersByID;
}
+(id)_operationQueueForPresenter:(id)presenter;
-(id)initWithServer:(id)server;
-(id)_idForReactor:(id)reactor;
-(void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;
-(void)_makePresenter:(id)presenter accommodateDisconnectionWithCompletionHandler:(id)completionHandler;
-(void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;
-(void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;
-(void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;
-(void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;
-(void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;
-(void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;
-(void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;
-(void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;
-(void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;
-(void)_makePresenter:(id)presenter setLastPresentedItemEventIdentifier:(unsigned long long)identifier;
-(void)_makePresenterObserveDisconnection:(id)disconnection;
-(void)_makePresenterObserveReconnection:(id)reconnection;
-(void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;
-(void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;
-(id)_readRelinquishmentForPresenter:(id)presenter;
-(id)_writeRelinquishmentForPresenter:(id)presenter;
-(void)addFilePresenter:(id)presenter;
-(void)addFileProvider:(id)provider completionHandler:(id)handler;
-(void)cancelAccessClaimForID:(id)anId;
-(void)dealloc;
-(id)filePresenters;
-(id)fileProviders;
-(void)finalize;
-(id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
-(void)grantSubarbitrationClaim:(id)claim withServer:(id)server;
-(void)handleCanceledServer;
-(void)handleMessage:(id)message;
-(id)idForFileReactor:(id)fileReactor;
-(void)removeFilePresenter:(id)presenter;
-(void)removeFileProvider:(id)provider;
-(void)revokeAccessClaimForID:(id)anId;
-(void)revokeSubarbitrationClaimForID:(id)anId;
-(void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
-(void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end

