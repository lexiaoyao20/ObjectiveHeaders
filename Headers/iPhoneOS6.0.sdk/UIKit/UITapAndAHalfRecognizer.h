/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableSet, UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
@private
	CGPoint _startPoint;
	float _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTaps;
	UITouch* _touch;
	UIDelayedAction* _tapTimer;
}
@property(assign, nonatomic) float allowableMovement;	// @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch* touch;	// @synthesize=_touch
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)_resetGestureRecognizer;
-(void)_verifyMovementInAllowableRange;
// declared property getter: -(float)allowableMovement;
-(void)clearTapTimer;
-(void)dealloc;
// declared property getter: -(double)minimumFinalPressDuration;
// declared property getter: -(int)numberOfFullTaps;
-(void)recognized:(id)recognized;
// declared property setter: -(void)setAllowableMovement:(float)movement;
// declared property setter: -(void)setMinimumFinalPressDuration:(double)duration;
// declared property setter: -(void)setNumberOfFullTaps:(int)fullTaps;
// declared property setter: -(void)setTouch:(id)touch;
-(void)startRecognitionTimer:(double)timer;
-(void)startTapTimer:(double)timer;
-(void)tooSlow:(id)slow;
// declared property getter: -(id)touch;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end
