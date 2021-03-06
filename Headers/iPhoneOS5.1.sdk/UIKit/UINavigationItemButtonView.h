/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationItemView.h"

@class UIColor, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UINavigationItemButtonView : UINavigationItemView {
@private
	int _style;
	BOOL _pressed;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor* _tintColor;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
-(void)_UIAppearance_setTintColor:(id)color;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(id)_appearanceStorage;
-(void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;
-(id)_backButtonBackgroundImageForState:(unsigned)state barMetrics:(int)metrics;
-(float)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;
-(UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(int)barMetrics;
-(float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;
-(id)_currentTextColorForBarStyle:(int)barStyle;
-(id)_currentTextShadowColorForBarStyle:(int)barStyle;
-(CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;
-(id)_defaultFont;
-(void)_drawBackground;
-(id)_scriptingInfo;
-(void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
// declared property setter: -(void)_setTintColor:(id)color;
-(void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)_styleAnimationDidStop:(id)_styleAnimation finished:(id)finished context:(id)context;
// declared property getter: -(id)_tintColor;
-(id)_titleTextAttributesForState:(unsigned)state;
-(BOOL)_useSilverLookForBarStyle:(int)barStyle;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(id)image;
-(CGSize)imageSize;
-(BOOL)pressed;
-(void)setPressed:(BOOL)pressed;
-(void)setStyle:(int)style;
-(void)setStyle:(int)style animated:(BOOL)animated;
-(id)title;
@end

