/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKSectionArrayDataSource.h"

@class GKGameRecord, NSOrderedSet, GKAchievementSection;

@interface GKAchievementDataSource : GKSectionArrayDataSource {
@private
	GKAchievementSection* _achievementSection;
	NSOrderedSet* _achievements;
	GKGameRecord* _gameRecord;
}
@property(retain, nonatomic) GKAchievementSection* achievementSection;	// @synthesize=_achievementSection
@property(readonly, assign, nonatomic) NSOrderedSet* achievements;	// @synthesize=_achievements
@property(readonly, assign, nonatomic) GKGameRecord* gameRecord;	// @synthesize=_gameRecord
+(id)sectionArrayDataSourceWithSection:(id)section inController:(id)controller;
+(id)sectionArrayDataSourceWithSection:(id)section inParentMultiDataSource:(id)parentMultiDataSource;
// declared property getter: -(id)achievementSection;
// declared property getter: -(id)achievements;
-(void)dealloc;
// declared property getter: -(id)gameRecord;
// declared property setter: -(void)setAchievementSection:(id)section;
-(void)tableView:(id)view updateStatusViewAfterLoading:(id)loading withError:(id)error;
-(void)tableView:(id)view updateStatusViewBeforeLoading:(id)loading;
@end

