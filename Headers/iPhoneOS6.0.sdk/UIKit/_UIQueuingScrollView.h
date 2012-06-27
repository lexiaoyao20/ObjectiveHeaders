/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class NSMutableArray, NSArray;
@protocol _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView {
@private
	id<_UIQueuingScrollViewDelegate> _qDelegate;
	id<_UIQueuingScrollViewDataSource> _qDataSource;
	int _navigationOrientation;
	NSArray* _views;
	NSArray* _wrapperViews;
	UIView* _pendingVisibleView;
	float _pageSpacing;
	NSMutableArray* _viewStateQueue;
	NSMutableArray* _completionStateQueue;
	BOOL _manualScrollInProgress;
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	} _delegateFlags;
	CGRect _disabledScrollingRegion;
}
@property(assign, nonatomic) CGRect disabledScrollingRegion;	// @synthesize=_disabledScrollingRegion
@property(assign, nonatomic) float pageSpacing;	// @synthesize=_pageSpacing
@property(assign, nonatomic) id<_UIQueuingScrollViewDataSource> qDataSource;	// @synthesize=_qDataSource
@property(assign, nonatomic) id<_UIQueuingScrollViewDelegate> qDelegate;	// @synthesize=_qDelegate
@property(readonly, assign, nonatomic) UIView* visibleView;
-(id)initWithFrame:(CGRect)frame navigationOrientation:(int)orientation;
-(void)_adjustContentInsets;
-(void)_boundsDidChangeToSize:(CGSize)_bounds;
-(void)_cleanUpCompletionState:(id)state didFinish:(BOOL)finish didComplete:(BOOL)complete;
-(void)_commitGestureDrivenScrollRevealingView:(id)view concealingView:(id)view2 inDirection:(int)direction canComplete:(BOOL)complete;
-(id)_dequeueViewForIndex:(int)index;
-(void)_didEndDraggingManualScroll;
-(void)_didEndManualScroll;
-(void)_didEndProgrammaticScroll;
-(void)_didEndScroll:(BOOL)scroll;
-(void)_didScrollWithAnimation:(BOOL)animation force:(BOOL)force;
-(void)_enqueueAnimatedScrollInDirection:(int)direction withView:(id)view completion:(id)completion;
-(void)_enqueueCompletionState:(id)state;
-(void)_flushView:(id)view animated:(BOOL)animated;
-(BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_invalidateOffscreenViews;
-(BOOL)_isDeceleratingInOppositionToNavigationDirection:(int)navigationDirection;
-(int)_navigationDirectionForActiveScroll:(BOOL)activeScroll;
-(int)_navigationDirectionFromCurrentOffset;
-(void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)_notifyDelegate;
-(void)_notifyDelegateDidCommitManualScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView concealView:(id)view direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;
-(void)_notifyDelegateDidEndManualScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated didComplete:(BOOL)complete;
-(void)_notifyDelegateWillManuallyScroll:(BOOL)_notifyDelegate toRevealView:(id)revealView concealingView:(id)view animated:(BOOL)animated;
-(void)_replaceViews:(id)views updatingContents:(BOOL)contents adjustContentInsets:(BOOL)insets animated:(BOOL)animated;
-(id)_requestViewForIndex:(int)index;
-(void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;
-(void)_setFrameAndApplyPageSpacing:(CGRect)spacing;
-(void)_setWrappedViewAtIndex:(int)index withView:(id)view;
-(id)_viewAfterView:(id)view;
-(id)_viewAtIndex:(int)index loadingIfNecessary:(BOOL)necessary updatingContents:(BOOL)contents animated:(BOOL)animated;
-(id)_viewBefore:(BOOL)before view:(id)view;
-(id)_viewBeforeView:(id)view;
-(id)_visibleView;
-(void)dealloc;
// declared property getter: -(CGRect)disabledScrollingRegion;
-(BOOL)isManualScrollInProgress;
-(BOOL)isPreviousScrollCompatibleWithScrollInDirection:(int)direction;
-(void)layoutSubviews;
// declared property getter: -(float)pageSpacing;
// declared property getter: -(id)qDataSource;
// declared property getter: -(id)qDelegate;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setDisabledScrollingRegion:(CGRect)region;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setPageSpacing:(float)spacing;
// declared property setter: -(void)setQDataSource:(id)source;
// declared property setter: -(void)setQDelegate:(id)delegate;
-(void)setView:(id)view direction:(int)direction animated:(BOOL)animated completion:(id)completion;
// declared property getter: -(id)visibleView;
@end
