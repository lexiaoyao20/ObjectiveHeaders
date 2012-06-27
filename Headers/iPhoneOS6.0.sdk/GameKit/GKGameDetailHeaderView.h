/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDetailHeaderView.h"

@class GKGameTitleView, GKGameRecord, GKHeaderSegmentedControl, UIImageView;

@interface GKGameDetailHeaderView : GKDetailHeaderView {
}
@property(readonly, assign, nonatomic) int gameIconStyle;
@property(retain, nonatomic) GKGameRecord* gameRecordLocalPlayer;	// @dynamic
@property(retain, nonatomic) UIImageView* iconView;	// @dynamic
@property(assign, nonatomic) BOOL landscapeStyle;	// @dynamic
@property(assign, nonatomic) GKHeaderSegmentedControl* segmentedControl;	// @dynamic
@property(retain, nonatomic) GKGameTitleView* titleView;	// @dynamic
+(id)headerView;
+(id)ratableHeaderView;
-(void)applyStoreItem:(id)item toBuyButton:(id)buyButton titleView:(id)view;
// declared property getter: -(int)gameIconStyle;
-(void)updateFromGameRecord;
@end
