/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAVController, NSMutableDictionary, MPVideoViewController, MPAVItem, MPDetailSlider, UINavigationBar;
@protocol MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned long long desiredParts;
@property(assign, nonatomic) unsigned long long disabledParts;
@property(assign, nonatomic) int interfaceOrientation;
@property(retain, nonatomic) MPAVItem* item;
@property(readonly, assign, nonatomic) UINavigationBar* navigationBar;
@property(retain, nonatomic) MPAVController* player;
@property(assign, nonatomic) MPVideoViewController* videoViewController;
@property(assign, nonatomic) unsigned long long visibleParts;
// declared property getter: -(BOOL)allowsWirelessPlayback;
// declared property getter: -(id)delegate;
// declared property getter: -(unsigned long long)desiredParts;
// declared property getter: -(unsigned long long)disabledParts;
-(void)hideAlternateTracks;
// declared property getter: -(int)interfaceOrientation;
// declared property getter: -(id)item;
// declared property getter: -(id)navigationBar;
// declared property getter: -(id)player;
// declared property setter: -(void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDesiredParts:(unsigned long long)parts;
-(void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;
// declared property setter: -(void)setDisabledParts:(unsigned long long)parts;
// declared property setter: -(void)setInterfaceOrientation:(int)orientation;
// declared property setter: -(void)setItem:(id)item;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setVideoViewController:(id)controller;
// declared property setter: -(void)setVisibleParts:(unsigned long long)parts;
-(void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;
-(void)showAlternateTracks;
-(void)startTicking;
-(void)stopTicking;
-(BOOL)updateTimeBasedValues;
// declared property getter: -(id)videoViewController;
// declared property getter: -(unsigned long long)visibleParts;
@end

@interface MPVideoOverlay : XXUnknownSuperclass <MPVideoOverlay, MPDetailSliderDelegate> {
	MPVideoViewController* _videoViewController;
	id<MPVideoOverlayDelegate> _delegate;
	MPAVItem* _item;
	MPAVController* _player;
	MPDetailSlider* _scrubControl;
	int _interfaceOrientation;
	BOOL _controlsAutohideDisabled;
	BOOL _wantsTick;
	unsigned long long _desiredParts;
	unsigned long long _visibleParts;
	unsigned long long _disabledParts;
	NSMutableDictionary* _tickTimeEvents;
	double _lastTickTime;
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) unsigned long long desiredParts;	// @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar* navigationBar;
@property(retain, nonatomic) MPAVController* player;	// @synthesize=_player
@property(assign, nonatomic) MPVideoViewController* videoViewController;	// @synthesize=_videoViewController
@property(assign, nonatomic) unsigned long long visibleParts;	// @synthesize=_visibleParts
-(id)initWithFrame:(CGRect)frame;
-(double)_duration;
-(void)_endSliderTracking;
-(void)_itemDurationDidChangeNotification:(id)_itemDuration;
-(double)_playableDuration;
-(void)_tickNotification:(id)notification;
// declared property getter: -(BOOL)allowsWirelessPlayback;
-(void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(unsigned long long)desiredParts;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)didMoveToSuperview;
// declared property getter: -(unsigned long long)disabledParts;
-(void)hideAlternateTracks;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(int)interfaceOrientation;
// declared property getter: -(id)item;
-(void)layoutSubviews;
// declared property getter: -(id)navigationBar;
-(void)performSelector:(SEL)selector whenTickingPastTime:(double)time;
// declared property getter: -(id)player;
-(void)registerForPlayerNotifications;
// declared property setter: -(void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDesiredParts:(unsigned long long)parts;
-(void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;
// declared property setter: -(void)setDisabledParts:(unsigned long long)parts;
// declared property setter: -(void)setInterfaceOrientation:(int)orientation;
// declared property setter: -(void)setItem:(id)item;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setVideoViewController:(id)controller;
// declared property setter: -(void)setVisibleParts:(unsigned long long)parts;
-(void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;
-(void)showAlternateTracks;
-(void)startTicking;
-(void)stopTicking;
-(void)unregisterForPlayerNotifications;
-(BOOL)updateTimeBasedValues;
// declared property getter: -(id)videoViewController;
// declared property getter: -(unsigned long long)visibleParts;
@end

