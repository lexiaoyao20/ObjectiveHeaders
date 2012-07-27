/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : XXUnknownSuperclass {
@private
	id<GKAchievementViewControllerDelegate> _achievementDelegate;
}
@property(assign, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;	// @synthesize=_achievementDelegate
-(id)init;
-(id)initWithRootViewController:(id)rootViewController;
// declared property getter: -(id)achievementDelegate;
-(void)dealloc;
-(void)donePressed:(id)pressed;
// declared property setter: -(void)setAchievementDelegate:(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end
