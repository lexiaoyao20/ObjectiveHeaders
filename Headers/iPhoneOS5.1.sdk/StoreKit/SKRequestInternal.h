/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol SKRequestDelegate;

@interface SKRequestInternal : XXUnknownSuperclass {
@private
	int _backgroundTaskIdentifier;
	id<SKRequestDelegate> _delegate;
	NSString* _identifier;
	int _state;
}
-(void)dealloc;
@end

