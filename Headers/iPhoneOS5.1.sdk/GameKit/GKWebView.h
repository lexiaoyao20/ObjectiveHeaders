/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIImage;

@interface GKWebView : XXUnknownSuperclass {
@private
	NSArray* _backgroundTiles;
	UIImage* _backgroundImage;
	CGPoint _contentOffset;
}
@property(retain, nonatomic) UIImage* backgroundImage;	// @synthesize=_backgroundImage
@property(retain, nonatomic) NSArray* backgroundTiles;	// @synthesize=_backgroundTiles
@property(assign, nonatomic) CGPoint contentOffset;	// @synthesize=_contentOffset
// declared property getter: -(id)backgroundImage;
// declared property getter: -(id)backgroundTiles;
// declared property getter: -(CGPoint)contentOffset;
-(void)dealloc;
-(void)layoutTilesWithBounds:(CGRect)bounds offset:(CGSize)offset;
-(void)scrollViewDidScroll:(id)scrollView;
// declared property setter: -(void)setBackgroundImage:(id)image;
// declared property setter: -(void)setBackgroundTiles:(id)tiles;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setContentOffset:(CGPoint)offset;
-(void)setFrame:(CGRect)frame;
-(void)updateBackground;
-(void)updateBackgroundImageWithBounds:(CGRect)bounds;
@end

