/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInputView.h"

@class UIToolbar, UISegmentedControl, UIBarButtonItem;
@protocol UIWebFormAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface UIWebFormAccessory : UIInputView {
@private
	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UISegmentedControl* _tab;
	UIBarButtonItem* _autofill;
	UIBarButtonItem* _clearButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	id<UIWebFormAccessoryDelegate> delegate;
}
@property(retain, nonatomic) UIBarButtonItem* _autofill;	// @synthesize
@property(retain, nonatomic) UIBarButtonItem* _clearButton;	// @synthesize
@property(retain, nonatomic) UISegmentedControl* _tab;	// @synthesize
@property(assign, nonatomic, getter=isAutoFillEnabled) BOOL autoFillEnabled;
@property(assign, nonatomic) id<UIWebFormAccessoryDelegate> delegate;	// @synthesize
@property(assign, nonatomic, getter=isNextEnabled) BOOL nextEnabled;
@property(assign, nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;
+(id)toolbarWithItems:(id)items;
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(id)_autofill;
// declared property getter: -(id)_clearButton;
-(void)_orientationDidChange:(id)_orientation;
-(void)_refreshAutofillPresentation;
// declared property getter: -(id)_tab;
-(void)_updateFrame;
-(void)autoFill:(id)fill;
-(void)clear:(id)clear;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)done:(id)done;
// declared property getter: -(BOOL)isAutoFillEnabled;
// declared property getter: -(BOOL)isNextEnabled;
// declared property getter: -(BOOL)isPreviousEnabled;
-(void)layoutSubviews;
// declared property setter: -(void)setAutoFillEnabled:(BOOL)enabled;
-(void)setAutoFillVisible:(BOOL)visible;
-(void)setClearVisible:(BOOL)visible;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setNextEnabled:(BOOL)enabled;
// declared property setter: -(void)setPreviousEnabled:(BOOL)enabled;
// declared property setter: -(void)set_autofill:(id)autofill;
// declared property setter: -(void)set_clearButton:(id)button;
// declared property setter: -(void)set_tab:(id)tab;
-(void)tab:(id)tab;
@end
