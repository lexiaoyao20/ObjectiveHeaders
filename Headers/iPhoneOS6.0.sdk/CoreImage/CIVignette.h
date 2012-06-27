/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIVignette : CIFilter {
@private
	CIImage* inputImage;
	NSNumber* inputIntensity;
	NSNumber* inputRadius;
}
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) NSNumber* inputIntensity;	// @synthesize
@property(copy, nonatomic) NSNumber* inputRadius;	// @synthesize
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputIntensity;
// declared property getter: -(id)inputRadius;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputIntensity:(id)intensity;
// declared property setter: -(void)setInputRadius:(id)radius;
@end
