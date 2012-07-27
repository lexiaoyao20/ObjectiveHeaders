/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKMultilineCellContentView.h"
#import "GameKit-Structs.h"


@interface GKAchievementCellContent : GKMultilineCellContentView {
	BOOL _highlighted;
	BOOL _offsetImage;
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// @synthesize=_highlighted
@property(assign, nonatomic) BOOL offsetImage;	// @synthesize=_offsetImage
-(id)init;
-(void)drawLineIndex:(unsigned)index inRect:(CGRect*)rect highlighted:(BOOL)highlighted;
// declared property getter: -(BOOL)isHighlighted;
// declared property getter: -(BOOL)offsetImage;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
// declared property setter: -(void)setOffsetImage:(BOOL)image;
-(void)setTheme:(id)theme;
@end
