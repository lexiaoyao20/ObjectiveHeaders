/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKGameDetailHeaderView.h"

@class GKGameRecord, GKGameTitleView, GKHeaderSegmentedControl, GKUITheme, UIImageView;

@interface GKGameDetailHeaderViewPhone : GKGameDetailHeaderView {
@private
	BOOL _landscapeStyle;
	UIImageView* _iconView;
	GKGameTitleView* _titleView;
	GKGameRecord* _gameRecordLocalPlayer;
}
@property(retain, nonatomic) GKGameRecord* gameRecordLocalPlayer;	// @synthesize=_gameRecordLocalPlayer
@property(retain, nonatomic) UIImageView* iconView;	// @synthesize=_iconView
@property(assign, nonatomic) GKHeaderSegmentedControl* segmentedControl;
@property(retain, nonatomic) GKUITheme* theme;
@property(retain, nonatomic) GKGameTitleView* titleView;	// @synthesize=_titleView
-(id)init;
-(void)configureTitleView;
-(void)dealloc;
// declared property getter: -(id)gameRecordLocalPlayer;
-(BOOL)iconOnLeft;
// declared property getter: -(id)iconView;
-(BOOL)landscapeStyle;
-(void)layoutAccessoryViewForBounds:(CGRect)bounds;
-(CGRect)layoutSubviewsForBounds:(CGRect)bounds;
-(float)preferredHeightForOrientation:(int)orientation;
-(void)prepareForReuse;
// declared property getter: -(id)segmentedControl;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGameRecordLocalPlayer:(id)player;
// declared property setter: -(void)setIconView:(id)view;
-(void)setLandscapeStyle:(BOOL)style;
// declared property setter: -(void)setSegmentedControl:(id)control;
// declared property setter: -(void)setTheme:(id)theme;
// declared property setter: -(void)setTitleView:(id)view;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)theme;
// declared property getter: -(id)titleView;
-(void)updateFromGameRecord;
@end

