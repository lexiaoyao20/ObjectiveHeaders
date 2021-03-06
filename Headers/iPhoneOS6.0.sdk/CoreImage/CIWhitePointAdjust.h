/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter {
@private
	CIImage* inputImage;
	CIColor* inputColor;
}
@property(copy, nonatomic) CIColor* inputColor;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputColor;
// declared property getter: -(id)inputImage;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputColor:(id)color;
// declared property setter: -(void)setInputImage:(id)image;
@end

