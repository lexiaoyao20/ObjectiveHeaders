/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnection.h"
#import "NSURLAuthenticationChallengeSender.h"
#import "Foundation-Structs.h"

@class NSURLConnectionInternal;

@interface NSURLConnection : XXUnknownSuperclass {
@private
	NSURLConnectionInternal* _internal;
}
+(void)_setSweeperInterval:(unsigned)interval;
+(unsigned)_sweeperInterval;
+(BOOL)canHandleRequest:(id)request;
+(id)connectionWithRequest:(id)request delegate:(id)delegate;
+(void)sendAsynchronousRequest:(id)request queue:(id)queue completionHandler:(id)handler;
+(id)sendSynchronousRequest:(id)request returningResponse:(id*)response error:(id*)error;
-(id)initWithRequest:(id)request delegate:(id)delegate;
-(id)initWithRequest:(id)request delegate:(id)delegate startImmediately:(BOOL)immediately;
-(id)_cfInternal;
-(id)_dlInternal;
-(void)_resumeLoading;
-(void)_suspendLoading;
-(void)cancel;
-(id)connectionProperties;
-(id)currentRequest;
-(void)dealloc;
-(BOOL)defersCallbacks;
-(void)download;
-(id)originalRequest;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)setDefersCallbacks:(BOOL)callbacks;
-(void)setDelegateQueue:(id)queue;
-(void)start;
-(void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;
@end

@interface NSURLConnection (Deprecated)
+(void)_setMIMETypesWithNoSizeLimit:(id)noSizeLimit;
@end

@interface NSURLConnection (Loader)
+(void)_resourceLoadLoop:(id)loop;
+(void)_setLoaderThreadPriority:(int)priority;
+(CFRunLoopRef)resourceLoaderRunLoop;
@end

@interface NSURLConnection (NSURLAuthenticationChallengeSender) <NSURLAuthenticationChallengeSender>
-(void)cancelAuthenticationChallenge:(id)challenge;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
@end

@interface NSURLConnection (Private)
-(id)_initWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;
@end

