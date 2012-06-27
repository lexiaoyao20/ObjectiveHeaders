/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSObject.h"

@class GKGame;

@protocol GKServiceViewControllerDelegate <NSObject>
@property(retain, nonatomic) GKGame* game;
// declared property getter: -(id)game;
-(void)presentActivityViewControllerForActivityItems:(id)activityItems fromRect:(id)rect withReply:(id)reply;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
// declared property setter: -(void)setGame:(id)game;
@end
