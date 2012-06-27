/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarComposedData, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView {
@private
	int _foregroundStyle;
	BOOL _itemIsEnabled[23];
	UIStatusBarLayoutManager* _layoutManagers[3];
	int _ignoreDataLevel;
	UIStatusBarComposedData* _pendedData;
	int _pendedActions;
}
@property(readonly, assign, nonatomic) int foregroundStyle;	// @synthesize=_foregroundStyle
-(id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;
-(void)_cleanUpAfterDataChange;
-(void)_cleanUpAfterSimpleReflow;
-(id)_computeVisibleItemsPreservingHistory:(BOOL)history;
-(void)_reflowItemViewsCrossfadingCenterWithDuration:(double)duration;
-(void)_reflowItemViewsWithDuration:(double)duration preserveHistory:(BOOL)history;
-(BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float*)remaining allowSwap:(BOOL)swap swappedItem:(id*)item;
-(void)dealloc;
// declared property getter: -(int)foregroundStyle;
-(BOOL)ignoringData;
-(void)reflowItemViews:(BOOL)views;
-(void)reflowItemViewsCrossfadingCenter:(id)center duration:(double)duration;
-(void)reflowItemViewsForgettingEitherSideItemHistory;
-(void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;
-(void)startIgnoringData;
-(void)stopIgnoringData:(BOOL)data;
@end
