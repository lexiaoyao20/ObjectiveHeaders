/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"

@class CIVector, CIColor, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter {
@private
	CIVector* inputCenter;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputRadius;
}
@property(retain, nonatomic) CIVector* inputCenter;	// @synthesize
@property(retain, nonatomic) CIColor* inputColor0;	// @synthesize
@property(retain, nonatomic) CIColor* inputColor1;	// @synthesize
@property(retain, nonatomic) NSNumber* inputRadius;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputCenter;
// declared property getter: -(id)inputColor0;
// declared property getter: -(id)inputColor1;
// declared property getter: -(id)inputRadius;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputCenter:(id)center;
// declared property setter: -(void)setInputColor0:(id)a0;
// declared property setter: -(void)setInputColor1:(id)a1;
// declared property setter: -(void)setInputRadius:(id)radius;
@end

