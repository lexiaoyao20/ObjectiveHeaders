/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKResponse.h"

@class NSDictionary, GKGameInternal, NSString;

@interface GKAuthenticateResponse : GKResponse {
@private
	NSString* _accountName;
	NSString* _playerID;
	NSString* _authToken;
	GKGameInternal* _game;
	NSDictionary* _alertDictionary;
	BOOL _sandboxed;
	BOOL _loginDisabled;
	BOOL _shouldUsePipelining;
	unsigned _maxPlayersP2P;
	unsigned _maxPlayersHosted;
	unsigned _maxPlayersTurnBased;
}
@property(retain, nonatomic) NSString* accountName;	// @synthesize=_accountName
@property(retain, nonatomic) NSDictionary* alertDictionary;	// @synthesize=_alertDictionary
@property(retain, nonatomic) NSString* authToken;	// @synthesize=_authToken
@property(retain, nonatomic) GKGameInternal* game;	// @synthesize=_game
@property(assign, nonatomic) BOOL loginDisabled;	// @synthesize=_loginDisabled
@property(assign, nonatomic) unsigned maxPlayersHosted;	// @synthesize=_maxPlayersHosted
@property(assign, nonatomic) unsigned maxPlayersP2P;	// @synthesize=_maxPlayersP2P
@property(assign, nonatomic) unsigned maxPlayersTurnBased;	// @synthesize=_maxPlayersTurnBased
@property(retain, nonatomic) NSString* playerID;	// @synthesize=_playerID
@property(assign, nonatomic) BOOL sandboxed;	// @synthesize=_sandboxed
@property(assign, nonatomic) BOOL shouldUsePipelining;	// @synthesize=_shouldUsePipelining
+(id)codedPropertyKeys;
// declared property getter: -(id)accountName;
// declared property getter: -(id)alertDictionary;
// declared property getter: -(id)authToken;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)game;
// declared property getter: -(BOOL)loginDisabled;
// declared property getter: -(unsigned)maxPlayersHosted;
// declared property getter: -(unsigned)maxPlayersP2P;
// declared property getter: -(unsigned)maxPlayersTurnBased;
// declared property getter: -(id)playerID;
// declared property getter: -(BOOL)sandboxed;
// declared property setter: -(void)setAccountName:(id)name;
// declared property setter: -(void)setAlertDictionary:(id)dictionary;
// declared property setter: -(void)setAuthToken:(id)token;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setLoginDisabled:(BOOL)disabled;
// declared property setter: -(void)setMaxPlayersHosted:(unsigned)hosted;
// declared property setter: -(void)setMaxPlayersP2P:(unsigned)p;
// declared property setter: -(void)setMaxPlayersTurnBased:(unsigned)based;
// declared property setter: -(void)setPlayerID:(id)anId;
// declared property setter: -(void)setSandboxed:(BOOL)sandboxed;
// declared property setter: -(void)setShouldUsePipelining:(BOOL)usePipelining;
// declared property getter: -(BOOL)shouldUsePipelining;
@end
