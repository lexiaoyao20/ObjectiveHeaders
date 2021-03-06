/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIView, UIBarButtonItem, NSArray, UIPopoverController, NSString, UIGestureRecognizer;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate> {
@private
	id _delegate;
	UIBarButtonItem* _barButtonItem;
	NSString* _buttonTitle;
	UIPopoverController* _hiddenPopoverController;
	UIView* _rotationSnapshotView;
	float _masterColumnWidth;
	float _gutterWidth;
	float _cornerRadius;
	int _rotatingFromOrientation;
	int _lastPresentedOrientation;
	CGRect _rotatingFromMasterViewFrame;
	CGRect _rotatingToMasterViewFrame;
	NSArray* _cornerImageViews;
	unsigned _slideTransitionCount;
	UIView* _masterBackgroundView;
	BOOL _presentsInFadingPopover;
	BOOL _presentsWithGesture;
	UIGestureRecognizer* _popoverPresentationGestureRecognizer;
	struct {
		unsigned validDelegateHiddenMasterOrientations : 5;
		unsigned delegateHiddenMasterOrientations : 5;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
	} _splitViewControllerFlags;
}
@property(assign, nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) BOOL presentsWithGesture;	// @synthesize=_presentsWithGesture
@property(copy, nonatomic) NSArray* viewControllers;
+(BOOL)_forcePresentsInSlidingPopover;
+(BOOL)_forcePresentsWithGesture;
+(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(id)initWithCoder:(id)coder;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)__viewWillLayoutSubviews;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(void)_calculateDelegateHiddenMasterOrientations;
-(BOOL)_canDisplayHostedMaster;
-(BOOL)_canSlideMaster;
-(void)_commonInit;
-(CGSize)_contentSizeForChildViewController:(id)childViewController inPopoverController:(id)popoverController;
-(BOOL)_delegateUsesLegacySlideSPI;
-(CGRect)_detailViewFrame;
-(void)_dismissMasterViewController;
-(BOOL)_effectivePresentsWithGesture;
-(void)_getRotationContentSettings:(XXStruct_tXAZTC*)settings;
-(void)_invalidateHidesMasterViewInOrientation:(int)orientation;
-(BOOL)_isHidesMasterInLandscapeValid;
-(BOOL)_isHidesMasterInPortraitValid;
-(BOOL)_isLandscape;
-(BOOL)_isMasterViewShown;
-(BOOL)_isMasterViewShownByDefault;
-(BOOL)_isRotating;
-(void)_loadNewSubviews:(id)subviews;
-(CGRect)_masterViewFrame;
-(void)_presentGestureAttemptedWithPresentedPopoverController:(id)presentedPopoverController;
-(void)_presentMasterViewController;
// declared property getter: -(BOOL)_presentsInFadingPopover;
-(void)_removeRoundedCorners;
// declared property setter: -(void)_setPresentsInFadingPopover:(BOOL)fadingPopover;
-(void)_setupRoundedCorners;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;
-(void)_updateMasterViewControllerFrame;
-(void)_viewControllerHiding:(id)hiding;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)coder;
// declared property getter: -(id)delegate;
-(id)detailViewController;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(float)gutterWidth;
-(BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(BOOL)hidesMasterViewInLandscape;
-(BOOL)hidesMasterViewInPortrait;
-(float)leftColumnWidth;
-(void)loadSubviews;
-(void)loadView;
-(float)masterColumnWidth;
-(id)masterViewController;
-(void)popoverWillAppear:(id)popover;
// declared property getter: -(BOOL)presentsWithGesture;
-(void)purgeMemoryForReason:(int)reason;
-(BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setGutterWidth:(float)width;
-(void)setHidesMasterViewInPortrait:(BOOL)portrait;
-(void)setLeftColumnWidth:(float)width;
-(void)setMasterColumnWidth:(float)width;
// declared property setter: -(void)setPresentsWithGesture:(BOOL)gesture;
// declared property setter: -(void)setViewControllers:(id)controllers;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)snapshotAllViews;
-(void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(void)snapshotMasterView;
-(void)toggleMasterVisible:(id)visible;
-(void)unloadViewForced:(BOOL)forced;
// declared property getter: -(id)viewControllers;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

