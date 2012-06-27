/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme, NSDate, NSString, GKCoreTextLabel;

@interface GKGameTitleView : XXUnknownSuperclass {
@private
	GKUITheme* _theme;
	NSString* _title;
	NSDate* _date;
	float _maxTitleFontSize;
	float _maxDateLabelFontSize;
	float _maxDateFontSize;
	unsigned _numberOfTitleLines;
	UIEdgeInsets _datelineInsets;
	GKCoreTextLabel* _lastPlayedLabel;
	GKCoreTextLabel* _dateLabel;
	GKCoreTextLabel* _gameTitleLabel;
}
@property(retain, nonatomic) NSDate* date;	// @synthesize=_date
@property(retain, nonatomic) GKCoreTextLabel* dateLabel;	// @synthesize=_dateLabel
@property(assign, nonatomic) UIEdgeInsets datelineInsets;	// @synthesize=_datelineInsets
@property(retain, nonatomic) GKCoreTextLabel* gameTitleLabel;	// @synthesize=_gameTitleLabel
@property(retain, nonatomic) GKCoreTextLabel* lastPlayedLabel;	// @synthesize=_lastPlayedLabel
@property(assign, nonatomic) float maxDateFontSize;	// @synthesize=_maxDateFontSize
@property(assign, nonatomic) float maxDateLabelFontSize;	// @synthesize=_maxDateLabelFontSize
@property(assign, nonatomic) float maxTitleFontSize;	// @synthesize=_maxTitleFontSize
@property(assign, nonatomic) unsigned numberOfTitleLines;	// @synthesize=_numberOfTitleLines
@property(retain, nonatomic) GKUITheme* theme;	// @synthesize=_theme
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
-(id)init;
// declared property getter: -(id)date;
// declared property getter: -(id)dateLabel;
// declared property getter: -(UIEdgeInsets)datelineInsets;
-(void)dealloc;
-(id)formattedDateForStyle:(unsigned)style relative:(BOOL)relative;
// declared property getter: -(id)gameTitleLabel;
// declared property getter: -(id)lastPlayedLabel;
-(void)layoutDateLineWithBounds:(CGRect)bounds viewBounds:(CGRect)bounds2 hasValidDate:(BOOL)date;
-(CGRect)layoutGameTitleLabelWithBounds:(CGRect)bounds;
-(void)layoutSubviews;
// declared property getter: -(float)maxDateFontSize;
// declared property getter: -(float)maxDateLabelFontSize;
// declared property getter: -(float)maxTitleFontSize;
// declared property getter: -(unsigned)numberOfTitleLines;
// declared property setter: -(void)setDate:(id)date;
// declared property setter: -(void)setDateLabel:(id)label;
// declared property setter: -(void)setDatelineInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setGameTitleLabel:(id)label;
// declared property setter: -(void)setLastPlayedLabel:(id)label;
// declared property setter: -(void)setMaxDateFontSize:(float)size;
// declared property setter: -(void)setMaxDateLabelFontSize:(float)size;
// declared property setter: -(void)setMaxTitleFontSize:(float)size;
// declared property setter: -(void)setNumberOfTitleLines:(unsigned)titleLines;
// declared property setter: -(void)setTheme:(id)theme;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)theme;
// declared property getter: -(id)title;
@end
