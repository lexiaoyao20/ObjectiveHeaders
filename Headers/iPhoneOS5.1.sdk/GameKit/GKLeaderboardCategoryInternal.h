/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKInternalRepresentation.h"

@class NSDictionary, NSString;

@interface GKLeaderboardCategoryInternal : GKInternalRepresentation {
@private
	NSString* _categoryID;
	NSString* _localizedTitle;
	unsigned _overallRank;
	unsigned _overallRankCount;
	unsigned _rankAmongFriends;
	unsigned _friendCount;
	NSDictionary* _icons;
}
@property(retain, nonatomic) NSString* categoryID;	// @synthesize=_categoryID
@property(assign, nonatomic) unsigned friendCount;	// @synthesize=_friendCount
@property(retain, nonatomic) NSDictionary* icons;	// @synthesize=_icons
@property(retain, nonatomic) NSString* localizedTitle;	// @synthesize=_localizedTitle
@property(assign, nonatomic) unsigned overallRank;	// @synthesize=_overallRank
@property(assign, nonatomic) unsigned overallRankCount;	// @synthesize=_overallRankCount
@property(assign, nonatomic) unsigned rankAmongFriends;	// @synthesize=_rankAmongFriends
+(id)codedPropertyKeys;
// declared property getter: -(id)categoryID;
-(void)dealloc;
// declared property getter: -(unsigned)friendCount;
// declared property getter: -(id)icons;
// declared property getter: -(id)localizedTitle;
// declared property getter: -(unsigned)overallRank;
// declared property getter: -(unsigned)overallRankCount;
// declared property getter: -(unsigned)rankAmongFriends;
// declared property setter: -(void)setCategoryID:(id)anId;
// declared property setter: -(void)setFriendCount:(unsigned)count;
// declared property setter: -(void)setIcons:(id)icons;
// declared property setter: -(void)setLocalizedTitle:(id)title;
// declared property setter: -(void)setOverallRank:(unsigned)rank;
// declared property setter: -(void)setOverallRankCount:(unsigned)count;
// declared property setter: -(void)setRankAmongFriends:(unsigned)friends;
@end

