/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIPickerView.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <NSCoding, UITableViewDataSource> {
@private
	NSMutableArray* _tables;
	UIView* _topFrame;
	NSMutableArray* _dividers;
	NSMutableArray* _selectionBars;
	id<UIPickerViewDataSource> _dataSource;
	id<UIPickerViewDelegate> _delegate;
	UIView* _backgroundView;
	int _numberOfComponents;
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
	} _pickerViewFlags;
}
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;
+(CGSize)defaultSizeForCurrentOrientation;
+(CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;
+(CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;
-(id)_createViewForPickerPiece:(int)pickerPiece;
-(int)_delegateNumberOfComponents;
-(int)_delegateNumberOfRowsInComponent:(int)component;
-(float)_delegateRowHeightForComponent:(int)component;
-(id)_delegateTitleForRow:(int)row forComponent:(int)component;
-(float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;
-(BOOL)_isLandscapeOrientation;
-(id)_orientationImageSuffix;
-(id)_popoverSuffix;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;
-(CGRect)_selectionBarRectForHeight:(float)height;
-(id)_selectionBarSuffix;
-(void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;
-(void)_sendSelectionChangedForComponent:(int)component;
-(void)_sendSelectionChangedFromTable:(id)table;
-(void)_setUsesCheckedSelection:(BOOL)selection;
-(CGSize)_sizeThatFits:(CGSize)fits;
-(BOOL)_soundsEnabled;
-(float)_tableRowHeight;
-(void)_updateSound;
-(BOOL)_usesCheckSelection;
-(BOOL)_usesCheckedSelection;
-(float)_wheelShift;
-(BOOL)allowsMultipleSelection;
-(int)columnForTableView:(id)tableView;
-(id)createDividerWithFrame:(CGRect)frame;
// declared property getter: -(id)dataSource;
-(void)dealloc;
-(CGSize)defaultSize;
// declared property getter: -(id)delegate;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)coder;
-(id)imageForPickerPiece:(int)pickerPiece;
-(void)layoutSubviews;
-(int)numberOfColumns;
// declared property getter: -(int)numberOfComponents;
-(int)numberOfRowsInColumn:(int)column;
-(int)numberOfRowsInComponent:(int)component;
-(id)pickerImageNamePrefix;
-(void)reload;
-(void)reloadAllComponents;
-(void)reloadAllPickerPieces;
-(void)reloadComponent:(int)component;
-(void)reloadData;
-(void)reloadDataForColumn:(int)column;
-(CGSize)rowSizeForComponent:(int)component;
-(double)scrollAnimationDuration;
-(void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;
-(void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;
-(int)selectedRowForColumn:(int)column;
-(int)selectedRowInComponent:(int)component;
-(void)setAllowsMultipleSelection:(BOOL)selection;
-(void)setAlpha:(float)alpha;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setDataSource:(id)source;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setFrame:(CGRect)frame;
-(void)setHidden:(BOOL)hidden;
-(void)setNeedsLayout;
// declared property setter: -(void)setShowsSelectionIndicator:(BOOL)indicator;
-(void)setSoundsEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)showsSelectionIndicator;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableViewForColumn:(int)column;
-(id)viewForRow:(int)row forComponent:(int)component;
-(NSRange)visibleRowsForColumn:(int)column;
@end

@interface UIPickerView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
@end
