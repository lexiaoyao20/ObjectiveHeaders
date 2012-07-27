/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardZoomGesture : UIGestureRecognizer {
@private
	BOOL _waiting;
	int _zoomType;
	float _initialDistance;
	double _maximumWaitForMultitouch;
	double _maximumWaitForMovement;
}
@property(assign, nonatomic) double maximumWaitForMovement;	// @synthesize=_maximumWaitForMovement
@property(assign, nonatomic) double maximumWaitForMultitouch;	// @synthesize=_maximumWaitForMultitouch
@property(assign, nonatomic) int zoomType;	// @synthesize=_zoomType
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)_resetGestureRecognizer;
-(float)averageDistanceForTouches:(id)touches;
-(CGPoint)centroidForTouches:(id)touches;
-(void)clearTimers;
-(void)failAfterDelay:(double)delay;
// declared property getter: -(double)maximumWaitForMovement;
// declared property getter: -(double)maximumWaitForMultitouch;
// declared property setter: -(void)setMaximumWaitForMovement:(double)movement;
// declared property setter: -(void)setMaximumWaitForMultitouch:(double)multitouch;
// declared property setter: -(void)setZoomType:(int)type;
-(void)tooSlow:(id)slow;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
// declared property getter: -(int)zoomType;
@end
