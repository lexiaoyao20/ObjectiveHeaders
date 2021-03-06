/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKImageBrush.h"

@class UIImage;

@interface GKLeaderboardCategoryIconBrush : GKImageBrush {
@private
	UIImage* _maskImage;
	UIImage* _backgroundImage;
	UIImage* _overlayImage;
	CGRect _imageRect;
}
@property(retain, nonatomic) UIImage* backgroundImage;	// @synthesize=_backgroundImage
@property(assign, nonatomic) CGRect imageRect;	// @synthesize=_imageRect
@property(retain, nonatomic) UIImage* maskImage;	// @synthesize=_maskImage
@property(retain, nonatomic) UIImage* overlayImage;	// @synthesize=_overlayImage
// declared property getter: -(id)backgroundImage;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property getter: -(CGRect)imageRect;
// declared property getter: -(id)maskImage;
// declared property getter: -(id)overlayImage;
-(float)scaleForInput:(id)input;
// declared property setter: -(void)setBackgroundImage:(id)image;
// declared property setter: -(void)setImageRect:(CGRect)rect;
// declared property setter: -(void)setMaskImage:(id)image;
// declared property setter: -(void)setOverlayImage:(id)image;
-(CGSize)sizeForInput:(id)input;
@end

