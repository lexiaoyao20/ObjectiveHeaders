/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "UITextViewDelegate.h"
#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString;

@interface EKExpandingTextView : XXUnknownSuperclass <UITextViewDelegate> {
@private
	UILabel* _placeholderLabel;
	BOOL _allowEnclosingViewScroll;
}
@property(assign, nonatomic) BOOL allowEnclosingScrollView;	// @synthesize=_allowEnclosingViewScroll
@property(copy, nonatomic) NSString* placeholder;
-(id)initWithFrame:(CGRect)frame;
-(void)_updatePlaceholder;
// declared property getter: -(BOOL)allowEnclosingScrollView;
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(id)placeholder;
// declared property setter: -(void)setAllowEnclosingScrollView:(BOOL)view;
-(void)setBackgroundColor:(id)color;
-(void)setContentOffset:(CGPoint)offset;
-(void)setContentSize:(CGSize)size;
-(void)setFont:(id)font;
// declared property setter: -(void)setPlaceholder:(id)placeholder;
-(void)setText:(id)text;
-(void)setTextAlignment:(int)alignment;
-(BOOL)shouldScrollEnclosingScrollView;
@end

