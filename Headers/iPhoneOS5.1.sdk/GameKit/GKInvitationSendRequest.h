/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSString, NSArray;

@interface GKInvitationSendRequest : GKDataRequest {
@private
	NSString* _sessionToken;
	NSArray* _peers;
	unsigned char _reason;
	NSString* _message;
}
@property(retain, nonatomic) NSString* message;	// @synthesize=_message
@property(retain, nonatomic) NSArray* peers;	// @synthesize=_peers
@property(assign, nonatomic) unsigned char reason;	// @synthesize=_reason
@property(retain, nonatomic) NSString* sessionToken;	// @synthesize=_sessionToken
-(void)dealloc;
-(void)handleResponseFromServer:(id)server;
-(id)header;
-(id)key;
// declared property getter: -(id)message;
// declared property getter: -(id)peers;
// declared property getter: -(unsigned char)reason;
-(id)request;
// declared property getter: -(id)sessionToken;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setPeers:(id)peers;
// declared property setter: -(void)setReason:(unsigned char)reason;
// declared property setter: -(void)setSessionToken:(id)token;
@end

