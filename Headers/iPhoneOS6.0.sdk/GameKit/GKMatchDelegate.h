/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSObject.h"


@protocol GKMatchDelegate <NSObject>
@optional
-(void)match:(id)match didFailWithError:(id)error;
@required
-(void)match:(id)match didReceiveData:(id)data fromPlayer:(id)player;
@optional
-(void)match:(id)match player:(id)player didChangeState:(int)state;
-(BOOL)match:(id)match shouldReinvitePlayer:(id)player;
@end

