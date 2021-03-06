/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIActivityIndicatorView, UIImage;

__attribute__((visibility("hidden")))
@interface SLTwitterBevelledImageView : XXUnknownSuperclass {
@private
	UIImage* _image;
	UIImageView* _chromeView;
	UIImageView* _previewView;
	UIActivityIndicatorView* _activityView;
}
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) BOOL isTranscoding;
+(id)blankWebpageImage;
-(id)init;
-(void).cxx_destruct;
// declared property getter: -(id)image;
// declared property getter: -(BOOL)isTranscoding;
-(CGRect)previewFrame;
// declared property setter: -(void)setImage:(id)image;
// declared property setter: -(void)setIsTranscoding:(BOOL)transcoding;
@end

