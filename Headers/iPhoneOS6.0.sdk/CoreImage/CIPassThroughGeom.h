/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIPassThroughGeom : CIFilter {
@private
	CIImage* inputImage;
}
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputImage;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputImage:(id)image;
@end

