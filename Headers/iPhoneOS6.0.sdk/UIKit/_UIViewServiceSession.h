/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "XPCProxyTarget.h"
#import "_UIViewServiceDeputyDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, _UIAsyncInvocation, NSMutableDictionary, XPCListener, XPCEndpoint, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : XXUnknownSuperclass <XPCProxyTarget, _UIViewServiceDeputyDelegate> {
@private
	XPCListener* _listener;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _connectionHandlers;
	int _connectionHandlersLock;
	_UIAsyncInvocation* _invalidationInvocation;
	NSMutableSet* _deputies;
	NSMutableSet* _pendingConnectionCatchers;
	NSMutableSet* _pendingDeputyProxies;
	id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
}
@property(readonly, assign) XPCEndpoint* endpoint;
-(id)init;
-(int)__automatic_invalidation_logic;
-(void)_handleConnection:(id)connection;
-(void)_invalidateUnconditionallyThen:(id)then;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)checkDeputyForRotation:(id)rotation;
-(void)dealloc;
-(void)deputy:(id)deputy didFailWithError:(id)error;
// declared property getter: -(id)endpoint;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)registerDeputyType:(id)type withConnectionHandler:(id)connectionHandler;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(void)setTerminationHandler:(id)handler;
-(void)unregisterDeputyType:(id)type;
@end

