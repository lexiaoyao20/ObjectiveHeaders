/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UINavigationController.h"

@class NSArray, UINavigationBar, UINavigationTransitionView, UIView, UIToolbar;
@protocol UINavigationControllerDelegate;

@interface UINavigationController : UIViewController {
@private
	UIView* _containerView;
	UINavigationBar* _navigationBar;
	Class _navigationBarClass;
	UIToolbar* _toolbar;
	UIView* _navigationTransitionView;
	UIEdgeInsets _currentScrollContentInsetDelta;
	UIEdgeInsets _previousScrollContentInsetDelta;
	float _previousScrollContentOffsetDelta;
	float _bottomInsetDelta;
	UIViewController* _disappearingViewController;
	id<UINavigationControllerDelegate> _delegate;
	int _savedNavBarStyleBeforeSheet;
	int _savedToolBarStyleBeforeSheet;
	struct {
		unsigned isAppearingAnimated : 1;
		unsigned isAlreadyPoppingNavigationItem : 1;
		unsigned isNavigationBarHidden : 1;
		unsigned isToolbarShown : 1;
		unsigned needsDeferredTransition : 1;
		unsigned isTransitioning : 1;
		unsigned lastOperation : 4;
		unsigned lastOperationAnimated : 1;
		unsigned deferredTransition : 8;
		unsigned didPreloadKeyboardAnimation : 1;
		unsigned didHideBottomBar : 1;
		unsigned isChangingOrientationForPop : 1;
		unsigned pretendNavBarHidden : 1;
		unsigned avoidMovingNavBarOffscreenBeforeUnhiding : 1;
		unsigned searchBarHidNavBar : 1;
		unsigned useSystemPopoverBarAppearance : 1;
	} _navigationControllerFlags;
	Class _toolbarClass;
}
@property(assign, nonatomic, setter=_setToolbarClass:) Class _toolbarClass;	// @synthesize
@property(assign, nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property(readonly, assign, nonatomic) UIViewController* bottomViewController;
@property(assign, nonatomic) id<UINavigationControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIViewController* disappearingViewController;	// @synthesize=_disappearingViewController
@property(readonly, assign, nonatomic) UINavigationBar* navigationBar;
@property(assign, nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property(readonly, assign, nonatomic) UINavigationTransitionView* navigationTransitionView;
@property(assign, nonatomic) BOOL needsDeferredTransition;
@property(assign, nonatomic) BOOL pretendNavBarHidden;
@property(readonly, assign, nonatomic) UIViewController* previousViewController;
@property(readonly, assign, nonatomic) UIToolbar* toolbar;
@property(assign, nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property(readonly, assign, nonatomic) UIViewController* topViewController;
@property(copy, nonatomic) NSArray* viewControllers;
@property(readonly, assign, nonatomic) UIViewController* visibleViewController;
-(id)initWithCoder:(id)coder;
-(id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)aClass;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithRootViewController:(id)rootViewController;
-(void)__viewWillLayoutSubviews;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)popover;
-(BOOL)_allowsAutorotation;
-(BOOL)_animationParametersForHidingNavigationBar:(BOOL)hidingNavigationBar lastOperation:(int)operation edge:(int*)edge duration:(double*)duration;
-(void)_applyScrollContentInsetDelta:(UIEdgeInsets)delta toScrollView:(id)scrollView;
-(void)_applyScrollContentOffsetDelta:(float)delta toScrollView:(id)scrollView;
-(void)_clearLastOperation;
-(void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)viewController;
-(void)_configureToolbar;
-(int)_deferredTransition;
-(void)_didBecomeContentViewControllerOfPopover:(id)popover;
-(void)_didResignContentViewControllerOfPopover:(id)popover;
-(BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)orientation;
-(id)_existingToolbar;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;
-(CGRect)_frameForViewController:(id)viewController;
-(void)_getRotationContentSettings:(XXStruct_tXAZTC*)settings;
-(BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)controller;
-(void)_hideOrShowBottomBarIfNeededWithTransition:(int)transition;
-(void)_hideShowNavigationBarDidStop:(id)_hideShowNavigationBar finished:(id)finished context:(void*)context;
-(void)_hideShowToolbarDidStop:(id)_hideShowToolbar finished:(id)finished context:(void*)context;
-(BOOL)_isNavigationBarVisible;
-(BOOL)_isPresentationContextByDefault;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(BOOL)_isTransitioning;
-(void)_layoutTopViewController;
-(void)_layoutTopViewControllerInSheet;
-(void)_layoutTopViewControllerInSheetWithPopoverView:(id)popoverView;
-(void)_layoutTopViewControllerOutOfSheet;
-(void)_layoutViewController:(id)controller;
-(id)_moreListTitle;
-(id)_navigationItems;
-(int)_navigationTransitionForUITransition:(int)uitransition;
-(void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)animated;
-(id)_popViewControllerWithTransition:(int)transition allowPoppingLast:(BOOL)last;
-(void)_positionNavigationBarHidden:(BOOL)hidden;
-(void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge;
-(void)_positionToolbarHidden:(BOOL)hidden;
-(void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge;
-(void)_prepareForDismissalInPopover:(id)popover;
-(void)_prepareForPresentationInPopover:(id)popover;
-(BOOL)_reallyWantsFullScreenLayout;
-(void)_releaseContainerViews;
-(void)_resetBottomBarHiddenState;
-(void)_restoreOriginalInsetAndOffsetToScrollView:(id)scrollView;
-(float)_scrollViewBottomContentInset;
-(void)_sendNavigationBarToBack;
-(void)_setNavigationBarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;
-(void)_setNavigationBarHidden:(BOOL)hidden edgeIfNotNavigating:(int)navigating duration:(double)duration;
// declared property setter: -(void)_setToolbarClass:(Class)aClass;
-(void)_setToolbarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;
-(void)_setViewControllers:(id)controllers transition:(int)transition;
-(BOOL)_shouldBottomBarBeHidden;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;
-(BOOL)_shouldNavigationBarInsetViewController:(id)controller;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldPopFromLandscapeToPortraitOrientation;
-(BOOL)_shouldUseOnePartRotation;
-(id)_snapshotView;
-(void)_startDeferredTransitionIfNeeded;
-(void)_startTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;
-(void)_tabBarControllerDidFinishShowingTabBar:(id)_tabBarController;
// declared property getter: -(Class)_toolbarClass;
-(int)_transitionForOldViewControllers:(id)oldViewControllers newViewControllers:(id)controllers;
-(void)_updateBarsForCurrentInterfaceOrientation;
-(void)_updateBottomBarHiddenState;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;
-(id)_viewForContentInPopover;
-(void)_willBecomeContentViewControllerOfPopover:(id)popover;
// declared property getter: -(BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;
// declared property getter: -(id)bottomViewController;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
-(id)defaultFirstResponder;
-(id)defaultPNGName;
// declared property getter: -(id)delegate;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)didShowViewController:(id)controller animated:(BOOL)animated;
// declared property getter: -(id)disappearingViewController;
-(BOOL)editing;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isModalInPopover;
// declared property getter: -(BOOL)isNavigationBarHidden;
-(BOOL)isShown;
// declared property getter: -(BOOL)isToolbarHidden;
-(int)lastOperation;
-(void)loadView;
-(void)makeModalViewControllerTopViewController;
-(int)modalTransitionStyle;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
// declared property getter: -(id)navigationBar;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
-(Class)navigationBarClass;
-(void)navigationBarDidChangeOpacity:(id)navigationBar;
-(void)navigationBarDidResizeForPrompt:(id)navigationBar;
// declared property getter: -(id)navigationTransitionView;
-(void)navigationTransitionView:(id)view didEndTransition:(int)transition fromView:(id)view3 toView:(id)view4;
-(void)navigationTransitionView:(id)view didStartTransition:(int)transition;
-(double)navigationTransitionView:(id)view durationForTransition:(int)transition;
// declared property getter: -(BOOL)needsDeferredTransition;
-(id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;
-(id)popToRootViewControllerWithTransition:(int)transition;
-(id)popToViewController:(id)viewController animated:(BOOL)animated;
-(id)popToViewController:(id)viewController transition:(int)transition;
-(id)popToViewControllerWithSnapbackIdentifier:(id)snapbackIdentifier animated:(BOOL)animated;
-(id)popViewControllerAnimated:(BOOL)animated;
-(id)popViewControllerWithAnimationTransition:(int)animationTransition duration:(double)duration curve:(int)curve;
-(id)popViewControllerWithTransition:(int)transition;
// declared property getter: -(BOOL)pretendNavBarHidden;
// declared property getter: -(id)previousViewController;
-(void)purgeMemoryForReason:(int)reason;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)pushViewController:(id)controller transition:(int)transition;
-(void)pushViewController:(id)controller transition:(int)transition forceImmediate:(BOOL)immediate;
-(id)rotatingFooterView;
-(id)rotatingHeaderView;
-(BOOL)searchBarHidNavBar;
// declared property setter: -(void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)unhiding;
-(void)setContentSizeForViewInPopover:(CGSize)popover;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDisappearingViewController:(id)controller;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setNavigationBar:(id)bar;
-(void)setNavigationBarClass:(Class)aClass;
// declared property setter: -(void)setNavigationBarHidden:(BOOL)hidden;
-(void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setNeedsDeferredTransition;
// declared property setter: -(void)setNeedsDeferredTransition:(BOOL)transition;
// declared property setter: -(void)setPretendNavBarHidden:(BOOL)hidden;
-(void)setSearchBarHidNavBar:(BOOL)bar;
-(void)setToolbar:(id)toolbar;
// declared property setter: -(void)setToolbarHidden:(BOOL)hidden;
-(void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;
// declared property setter: -(void)setViewControllers:(id)controllers;
-(void)setViewControllers:(id)controllers animated:(BOOL)animated;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)tabBarItem;
// declared property getter: -(id)toolbar;
// declared property getter: -(id)topViewController;
-(void)updateTabBarItemForViewController:(id)viewController;
-(void)updateTitleForViewController:(id)viewController;
// declared property getter: -(id)viewControllers;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
// declared property getter: -(id)visibleViewController;
-(BOOL)wasLastOperationAnimated;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willShowViewController:(id)controller animated:(BOOL)animated;
@end

@interface UINavigationController (MasterDetailLegacySupport)
@property(retain) UIViewController* detailViewController;
@property(assign) BOOL isExpanded;
// declared property getter: -(id)detailViewController;
// declared property getter: -(BOOL)isExpanded;
// declared property setter: -(void)setDetailViewController:(id)controller;
// declared property setter: -(void)setIsExpanded:(BOOL)expanded;
@end

