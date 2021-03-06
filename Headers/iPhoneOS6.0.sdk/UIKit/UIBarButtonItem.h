/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"
#import "NSCoding.h"

@class NSString, NSSet, UIView, UIColor, UIToolbarButton, UIImage;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
@private
	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	float _width;
	UIView* _view;
	int _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	} _barButtonItemFlags;
	float _toolbarCharge;
	float _minimumWidth;
	float _maximumWidth;
	NSSet* _possibleSystemItems;
	BOOL _flexible;
}
@property(assign, nonatomic, setter=_setFlexible:) BOOL _flexible;	// @synthesize
@property(assign, nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property(assign, nonatomic, setter=_setMaximumWidth:) float _maximumWidth;	// @synthesize
@property(assign, nonatomic, setter=_setMinimumWidth:) float _minimumWidth;	// @synthesize
@property(readonly, assign, nonatomic) UIToolbarButton* _toolbarButton;
@property(assign, nonatomic, setter=_setToolbarCharge:) float _toolbarCharge;	// @synthesize
@property(assign, nonatomic) SEL action;	// @synthesize=_action
@property(retain, nonatomic) UIView* customView;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage* miniImage;
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet* possibleSystemItems;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet* possibleSystemItems;	// @synthesize=_possibleSystemItems
@property(copy, nonatomic) NSSet* possibleTitles;
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) int style;
@property(readonly, assign, nonatomic) int systemItem;
@property(readonly, assign, nonatomic) int systemItem;
@property(assign, nonatomic) id target;	// @synthesize=_target
@property(retain, nonatomic) UIColor* tintColor;
@property(assign, nonatomic) float width;
+(id)_appearanceProxyViewClasses;
+(void)_getSystemItemStyle:(int*)style title:(id*)title image:(id*)image selectedImage:(id*)image4 action:(SEL*)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered usingSystemItem:(int)item usingItemStyle:(int)style10;
+(Class)classForNavigationButton;
-(id)init;
-(id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;
-(id)initWithCoder:(id)coder;
-(id)initWithCustomView:(id)customView;
-(id)initWithImage:(id)image landscapeImagePhone:(id)phone style:(int)style target:(id)target action:(SEL)action;
-(id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;
-(id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;
-(id)_appearanceStorage;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)segmentedControl;
-(void)_connectInterfaceBuilderEventConnection:(id)connection;
// declared property getter: -(BOOL)_flexible;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)adjust imageInsets:(UIEdgeInsets*)insets landscape:(BOOL)landscape;
-(void)_getSystemItemStyle:(int*)style title:(id*)title image:(id*)image selectedImage:(id*)image4 action:(SEL*)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;
-(void)_getToolbarEdgeInsets:(UIEdgeInsets*)insets imageInsets:(UIEdgeInsets*)insets2 glowInsets:(UIEdgeInsets*)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;
// declared property getter: -(BOOL)_imageHasEffects;
// declared property getter: -(float)_maximumWidth;
// declared property getter: -(id)_miniImage;
// declared property getter: -(UIEdgeInsets)_miniImageInsets;
// declared property getter: -(float)_minimumWidth;
// declared property getter: -(id)_possibleSystemItems;
-(void)_sendAction:(id)action withEvent:(id)event;
// declared property setter: -(void)_setFlexible:(BOOL)flexible;
// declared property setter: -(void)_setImageHasEffects:(BOOL)effects;
// declared property setter: -(void)_setMaximumWidth:(float)width;
// declared property setter: -(void)_setMiniImage:(id)image;
// declared property setter: -(void)_setMiniImageInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)_setMinimumWidth:(float)width;
// declared property setter: -(void)_setPossibleSystemItems:(id)items;
-(void)_setSystemItem:(int)item;
// declared property setter: -(void)_setToolbarCharge:(float)charge;
-(void)_setWidth:(float)width;
-(BOOL)_shouldBezelSystemButtonImage;
// declared property getter: -(id)_toolbarButton;
// declared property getter: -(float)_toolbarCharge;
-(void)_updateView;
-(float)_width;
// declared property getter: -(SEL)action;
-(id)backButtonBackgroundImageForState:(unsigned)state barMetrics:(int)metrics;
-(float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)barMetrics;
-(id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;
-(id)backgroundImageForState:(unsigned)state style:(int)style barMetrics:(int)metrics;
-(float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;
-(id)createViewForNavigationItem:(id)navigationItem;
-(id)createViewForToolbar:(id)toolbar;
// declared property getter: -(id)customView;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)image;
-(UIEdgeInsets)imageInsets;
-(BOOL)isCustomViewItem;
// declared property getter: -(BOOL)isEnabled;
-(BOOL)isMinibarView;
// declared property getter: -(BOOL)isSystemItem;
-(id)landscapeImagePhone;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(id)nextResponder;
// declared property getter: -(id)possibleTitles;
-(id)scriptingID;
// declared property getter: -(BOOL)selected;
// declared property setter: -(void)setAction:(SEL)action;
-(void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;
-(void)setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
// declared property setter: -(void)setCustomView:(id)view;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
-(void)setImage:(id)image;
-(void)setImageInsets:(UIEdgeInsets)insets;
-(void)setIsMinibarView:(BOOL)view;
-(void)setLandscapeImagePhone:(id)phone;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setPossibleTitles:(id)titles;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setStyle:(int)style;
-(void)setTag:(int)tag;
// declared property setter: -(void)setTarget:(id)target;
// declared property setter: -(void)setTintColor:(id)color;
-(void)setTitle:(id)title;
-(void)setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;
-(void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)setView:(id)view;
// declared property setter: -(void)setWidth:(float)width;
// declared property getter: -(int)style;
// declared property getter: -(int)systemItem;
-(int)tag;
// declared property getter: -(id)target;
// declared property getter: -(id)tintColor;
-(id)title;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(int)barMetrics;
-(id)titleTextAttributesForState:(unsigned)state;
-(id)view;
// declared property getter: -(float)width;
-(id)window;
@end

