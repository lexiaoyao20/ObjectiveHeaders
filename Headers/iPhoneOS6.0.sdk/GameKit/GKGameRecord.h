/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKGame, GKScore, NSDate, GKGameRecordInternal, NSString, GKPlayer;

@interface GKGameRecord : XXUnknownSuperclass {
@private
	GKGameRecordInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;
}
@property(readonly, assign, nonatomic) unsigned achievementPoints;	// @dynamic
@property(readonly, assign, nonatomic) unsigned achievements;	// @dynamic
@property(readonly, assign, nonatomic) NSString* categoryID;	// @dynamic
@property(readonly, assign, nonatomic) unsigned friendRank;	// @dynamic
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKGameRecordInternal* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic) NSDate* lastPlayedDate;	// @dynamic
@property(readonly, assign, nonatomic) unsigned maxAchievementPoints;
@property(readonly, assign, nonatomic) unsigned maxAchievements;
@property(readonly, assign, nonatomic) unsigned maxFriendRank;	// @dynamic
@property(readonly, assign, nonatomic) unsigned maxRank;	// @dynamic
@property(readonly, assign, nonatomic) unsigned numberOfCategories;
@property(readonly, assign, nonatomic) BOOL played;
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
@property(readonly, assign, nonatomic) NSDate* purchaseDate;	// @dynamic
@property(readonly, assign, nonatomic) unsigned rank;	// @dynamic
@property(assign, nonatomic) float rating;	// @dynamic
@property(readonly, assign, nonatomic) GKScore* score;	// @dynamic
@property(readonly, assign, nonatomic) BOOL supportsAchievements;
@property(readonly, assign, nonatomic) BOOL supportsLeaderboards;
+(id)cacheKeyForPlayer:(id)player game:(id)game;
+(id)cacheKeyForPlayer:(id)player internal:(id)internal;
+(id)gameRecordForPlayer:(id)player game:(id)game;
+(id)internalRepresentationCache;
+(id)internalRepresentationForPlayer:(id)player game:(id)game;
+(void)loadGameRecordForPlayer:(id)player game:(id)game withCompletionHandler:(id)completionHandler;
+(void)loadGameRecordsForPlayer:(id)player games:(id)games withCompletionHandler:(id)completionHandler;
+(void)partionGameRecords:(id)records returniOS:(id*)os returnMac:(id*)mac;
+(void)updateGameRecords:(id)records withCompletionHandlerAndError:(id)completionHandlerAndError;
-(id)initWithInternalRepresentation:(id)internalRepresentation player:(id)player game:(id)game;
-(void)dealloc;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)game;
-(unsigned)hash;
// declared property getter: -(id)internal;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(unsigned)maxAchievementPoints;
// declared property getter: -(unsigned)maxAchievements;
// declared property getter: -(unsigned)numberOfCategories;
// declared property getter: -(BOOL)played;
// declared property getter: -(id)player;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property getter: -(id)score;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setPlayer:(id)player;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property getter: -(BOOL)supportsAchievements;
// declared property getter: -(BOOL)supportsLeaderboards;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

