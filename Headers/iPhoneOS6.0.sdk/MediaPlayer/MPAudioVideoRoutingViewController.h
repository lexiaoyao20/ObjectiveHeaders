/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPAudioVideoRoutingTableViewController;
@protocol MPAudioVideoRoutingViewControllerDelegate;

@interface MPAudioVideoRoutingViewController : XXUnknownSuperclass {
	MPAudioVideoRoutingTableViewController* _tableViewController;
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<MPAudioVideoRoutingViewControllerDelegate> delegate;	// @synthesize=_delegate
+(BOOL)hasWirelessDisplayRoutes;
-(id)init;
-(void)_doneAction:(id)action;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)loadView;
// declared property setter: -(void)setDelegate:(id)delegate;
@end
