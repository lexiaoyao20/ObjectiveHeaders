/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertViewDelegate.h"
#import "_UITargetedProxy.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
@private
	id _delegate;
}
+(id)restrictedProxyForAlertView:(id)alertView;
-(id)delegate;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)respondsToSelector:(SEL)selector;
-(void)setDelegate:(id)delegate;
@end

