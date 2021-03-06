/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAVController;

@interface MPSystemNowPlayingController : XXUnknownSuperclass {
@private
	BOOL _hasSeenAnyItem;
	MPAVController* _player;
	dispatch_queue_s* _serialQueue;
}
@property(assign, nonatomic) MPAVController* player;	// @synthesize=_player
-(id)init;
-(int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;
-(int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;
-(unsigned)_chapterIndexForItem:(id)item atTime:(double)time;
-(void)dealloc;
// declared property getter: -(id)player;
-(void)postNowPlayingInfoForItem:(id)item;
-(void)postProgressUpdateForItem:(id)item;
// declared property setter: -(void)setPlayer:(id)player;
@end

