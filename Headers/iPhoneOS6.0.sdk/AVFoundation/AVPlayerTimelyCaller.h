/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference, AVPlayer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerTimelyCaller : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _timerQueue;
	AVWeakReference* _weakReference;
	AVPlayer* _player;
	NSObject<OS_dispatch_source>* _timerSource;
	BOOL _isInvalidated;
	BOOL _timerQueueIsPlayerStateDispatchQueue;
	OpaqueCMTimebase* _timebase;
	double _lastRate;
	double _currentRate;
}
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference* weakReference;	// @synthesize=_weakReference
-(id)initWithPlayer:(id)player queue:(id)queue;
-(void)_effectiveRateChanged;
-(void)_handleTimeDiscontinuity;
-(long)_removeCurrentTimebaseFromTimerSource;
-(void)_resetNextFireTime;
-(void)_startObservingTimebaseNotificationsForCurrentItem;
-(void)_stopObservingTimebaseNotifications;
-(void)_stopRespondingToPlayerStateChanges;
-(void)_timebaseDidChange:(id)_timebase;
// declared property getter: -(id)_weakReference;
-(void)dealloc;
-(void)finalize;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)player;
@end

