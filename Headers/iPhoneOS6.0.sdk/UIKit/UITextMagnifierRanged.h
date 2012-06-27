/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput>* _text;
	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;
	float _touchOffsetFromMagnificationPoint;
	float _magnifierOffsetFromTouch;
	BOOL _isHorizontal;
}
@property(assign, nonatomic) CGPoint animationPoint;	// @synthesize=_animationPoint
@property(assign, nonatomic) BOOL isHorizontal;	// @synthesize=_isHorizontal
@property(assign, nonatomic) CGPoint magnificationPoint;
@property(retain, nonatomic) UIView* target;	// @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;
@property(retain, nonatomic) UIResponder<UITextInput>* text;	// @synthesize=_text
+(id)sharedRangedMagnifier;
-(id)initWithDefaultFrame;
-(void)animateToAutoscrollRenderer;
-(void)animateToMagnifierRenderer;
// declared property getter: -(CGPoint)animationPoint;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;
-(CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;
-(void)dealloc;
-(void)detectLostTouches:(id)touches;
-(int)horizontalMovement;
-(int)horizontalMovementAtTime:(double)time;
// declared property getter: -(BOOL)isHorizontal;
// declared property getter: -(CGPoint)magnificationPoint;
-(float)offsetFromMagnificationPoint;
-(void)postAutoscrollPoint:(CGPoint)point;
-(void)remove;
// declared property setter: -(void)setAnimationPoint:(CGPoint)point;
-(void)setAutoscrollDirections:(int)directions;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setIsHorizontal:(BOOL)horizontal;
// declared property setter: -(void)setMagnificationPoint:(CGPoint)point;
-(void)setNeedsDisplay;
// declared property setter: -(void)setTarget:(id)target;
// declared property setter: -(void)setText:(id)text;
-(void)setToMagnifierRenderer;
-(CGPoint)snappedPoint:(CGPoint)point;
-(void)stopMagnifying:(BOOL)magnifying;
// declared property getter: -(id)target;
// declared property getter: -(CGPoint)terminalPoint;
// declared property getter: -(BOOL)terminalPointPlacedCarefully;
// declared property getter: -(id)text;
-(void)updateFrame;
-(BOOL)wasPlacedCarefullyAtTime:(double)time;
-(void)windowWillRotate:(id)window;
-(void)zoomDownAnimation;
-(void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;
-(void)zoomUpAnimation;
-(void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;
@end
