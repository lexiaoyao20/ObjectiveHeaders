/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, NSTimer, UILabel, UIImageView;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : XXUnknownSuperclass {
	UILabel* _currentTimeInverseLabel;
	UILabel* _currentTimeLabel;
@private
	BOOL _allowsScrubbing;
	BOOL _allowsDetailScrubbing;
	BOOL _autoscrubActive;
	NSTimer* _autoscrubTimer;
	double _availableDuration;
	CGPoint _beginLocationInView;
	BOOL _canCommit;
	double _currentTime;
	id _delegate;
	float _detailScrubbingVerticalRange;
	BOOL _didBeginTracking;
	UIImageView* _downloadingTrackOverlay;
	double _duration;
	BOOL _durationAllowsDetailScrubbing;
	UIImageView* _glowDetailScrubImageView;
	BOOL _isTracking;
	CGPoint _lastCommittedLocationInView;
	float _minScale;
	float _minTimeLabelWidth;
	float _maxTrackWidth;
	BOOL _needsCommit;
	CGPoint _previousLocationInView;
	int _scrubValue;
	int _style;
	UIEdgeInsets _timeLabelInsets;
	int _timeLabelStyle;
	UIImageView* _thumbImageView;
	float _trackInset;
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;
@property(assign, nonatomic) BOOL allowsScrubbing;	// @synthesize=_allowsScrubbing
@property(assign, nonatomic) double availableDuration;	// @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// @synthesize=_duration
@property(readonly, assign, nonatomic) NSString* localizedScrubSpeedText;
@property(assign, nonatomic) float minTimeLabelWidth;	// @synthesize=_minTimeLabelWidth
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// @synthesize=_timeLabelStyle
+(float)defaultHeight;
+(Class)labelClass;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;
-(void)_adjustMinScale;
-(void)_autoscrubTick:(id)tick;
-(void)_commitValue;
-(void)_resetScrubInfo;
-(float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;
-(float)_scaleForVerticalPosition:(float)verticalPosition;
-(void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;
-(void)_setupControlsForStyle;
-(id)_stringForCurrentTime:(double)currentTime;
-(id)_stringForInverseCurrentTime:(double)inverseCurrentTime;
-(id)_stringForTime:(double)time;
-(CGRect)_thumbHitFrame;
-(void)_updateForAvailableDuraton;
-(void)_updateTimeDisplayForTime:(double)time;
-(void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;
-(void)_updateTrackInset;
// declared property getter: -(BOOL)allowsDetailScrubbing;
// declared property getter: -(BOOL)allowsScrubbing;
// declared property getter: -(double)availableDuration;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTracking;
-(void)cancelTrackingWithEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(id)createThumbView;
-(id)currentThumbImage;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)detailScrubbingAvailableForCurrentDuration;
// declared property getter: -(float)detailScrubbingVerticalRange;
// declared property getter: -(double)duration;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)isTracking;
-(void)layoutSubviews;
// declared property getter: -(id)localizedScrubSpeedText;
// declared property getter: -(float)minTimeLabelWidth;
// declared property setter: -(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
// declared property setter: -(void)setAllowsScrubbing:(BOOL)scrubbing;
// declared property setter: -(void)setAvailableDuration:(double)duration;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDetailScrubbingVerticalRange:(float)range;
// declared property setter: -(void)setDuration:(double)duration;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setMinTimeLabelWidth:(float)width;
// declared property setter: -(void)setTimeLabelInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setTimeLabelStyle:(int)style;
-(void)setValue:(float)value animated:(BOOL)animated;
-(CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;
-(id)timeLabelFontForStyle:(int)style;
// declared property getter: -(UIEdgeInsets)timeLabelInsets;
-(id)timeLabelShadowColorForStyle:(int)style;
-(CGSize)timeLabelShadowOffsetForStyle:(int)style;
// declared property getter: -(int)timeLabelStyle;
-(id)timeLabelTextColorForStyle:(int)style;
-(float)timeLabelVerticalOffsetForStyle:(int)style;
-(CGRect)trackRectForBounds:(CGRect)bounds;
@end
