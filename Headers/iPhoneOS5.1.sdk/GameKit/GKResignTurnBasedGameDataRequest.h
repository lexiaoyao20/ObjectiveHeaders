/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKTurnBasedMatch;

@interface GKResignTurnBasedGameDataRequest : GKDataRequest {
@private
	GKTurnBasedMatch* _match;
	int _outcome;
}
@property(retain, nonatomic) GKTurnBasedMatch* match;	// @synthesize=_match
@property(assign, nonatomic) int outcome;	// @synthesize=_outcome
-(void)dealloc;
-(id)key;
// declared property getter: -(id)match;
// declared property getter: -(int)outcome;
-(id)request;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setOutcome:(int)outcome;
@end

