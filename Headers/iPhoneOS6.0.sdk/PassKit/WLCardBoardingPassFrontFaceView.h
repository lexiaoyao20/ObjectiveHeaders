/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "WLCardFrontFaceView.h"

@class UIImageView;

@interface WLCardBoardingPassFrontFaceView : WLCardFrontFaceView {
@private
	UIImageView* _transitImageView;
	UIImageView* _footerImageView;
}
+(id)cardFaceTemplateScrunched:(BOOL)scrunched;
-(id)_transitGlyphForTransitType:(int)transitType scrunched:(BOOL)scrunched;
-(void)createBodyContentViews;
-(void)dealloc;
-(void)layoutSubviews;
@end

