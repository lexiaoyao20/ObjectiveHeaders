/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKPlayerCellContentView.h"

@class GKGameMatch;

@interface GKRecentMatchCellContentView : GKPlayerCellContentView {
@private
	GKGameMatch* _match;
	BOOL _matched;
}
@property(retain, nonatomic) GKGameMatch* match;	// @synthesize=_match
@property(assign, nonatomic) BOOL matched;	// @synthesize=_matched
+(id)recentMatchContentView;
-(void)dealloc;
// declared property getter: -(id)match;
// declared property getter: -(BOOL)matched;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setMatched:(BOOL)matched;
-(void)updateLines;
@end

