/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSArray, NSString, GKMatchRequest, NSData;

@interface GKMatchPlayersDataRequest : GKDataRequest {
@private
	GKMatchRequest* _matchRequest;
	BOOL _serverHosted;
	int _connectedPeers;
	NSData* _connectionData;
	NSString* _rid;
	NSArray* _matches;
	NSData* _sessionToken;
	NSData* _cdxTicket;
	NSArray* _relayPushes;
	unsigned char _matchVersion;
}
@property(retain, nonatomic) NSData* cdxTicket;	// @synthesize=_cdxTicket
@property(assign, nonatomic) int connectedPeers;	// @synthesize=_connectedPeers
@property(retain, nonatomic) NSData* connectionData;	// @synthesize=_connectionData
@property(retain, nonatomic) GKMatchRequest* matchRequest;	// @synthesize=_matchRequest
@property(assign, nonatomic) unsigned char matchVersion;	// @synthesize=_matchVersion
@property(retain, nonatomic) NSArray* matches;	// @synthesize=_matches
@property(retain, nonatomic) NSArray* relayPushes;	// @synthesize=_relayPushes
@property(retain, nonatomic) NSString* rid;	// @synthesize=_rid
@property(assign, nonatomic) BOOL serverHosted;	// @synthesize=_serverHosted
@property(retain, nonatomic) NSData* sessionToken;	// @synthesize=_sessionToken
-(void)cancelWithError:(id)error;
// declared property getter: -(id)cdxTicket;
// declared property getter: -(int)connectedPeers;
// declared property getter: -(id)connectionData;
-(void)dealloc;
-(void)handleResponseFromServer:(id)server;
-(id)header;
-(id)key;
// declared property getter: -(id)matchRequest;
// declared property getter: -(unsigned char)matchVersion;
// declared property getter: -(id)matches;
// declared property getter: -(id)relayPushes;
-(id)request;
// declared property getter: -(id)rid;
// declared property getter: -(BOOL)serverHosted;
// declared property getter: -(id)sessionToken;
// declared property setter: -(void)setCdxTicket:(id)ticket;
// declared property setter: -(void)setConnectedPeers:(int)peers;
// declared property setter: -(void)setConnectionData:(id)data;
// declared property setter: -(void)setMatchRequest:(id)request;
// declared property setter: -(void)setMatchVersion:(unsigned char)version;
// declared property setter: -(void)setMatches:(id)matches;
// declared property setter: -(void)setRelayPushes:(id)pushes;
// declared property setter: -(void)setRid:(id)rid;
// declared property setter: -(void)setServerHosted:(BOOL)hosted;
// declared property setter: -(void)setSessionToken:(id)token;
@end

