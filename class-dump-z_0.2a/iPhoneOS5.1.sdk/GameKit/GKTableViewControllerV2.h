/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "GKTableViewController.h"

@class GKMultiColumnTableViewCell, GKInviteButton, UIView;
@protocol GKTableViewCellContents, GKTableViewControllerDataSource;

@interface GKTableViewControllerV2 : GKTableViewController <UIGestureRecognizerDelegate> {
	double _selectGestureStartTime;
	BOOL _isStoreDemoModeEnabled;
@private
	float _columnSeparatorWidth;
	GKMultiColumnTableViewCell* _selectedCell;
	unsigned _selectedColumn;
	BOOL _scrollDisabledForConfirmation;
	id<GKTableViewControllerDataSource> _sectionDataSource;
	id<GKTableViewControllerDataSource> _retainedSectionDataSource;
	UIView<GKTableViewCellContents>* _editingContentView;
	GKInviteButton* _confirmationButton;
	UIView* _confirmationClipView;
}
@property(assign, nonatomic) float columnSeparatorWidth;	// @synthesize=_columnSeparatorWidth
@property(retain, nonatomic) GKInviteButton* confirmationButton;	// @synthesize=_confirmationButton
@property(retain, nonatomic) UIView* confirmationClipView;	// @synthesize=_confirmationClipView
@property(retain, nonatomic) UIView<GKTableViewCellContents>* editingContentView;	// @synthesize=_editingContentView
@property(retain, nonatomic) id<GKTableViewControllerDataSource> retainedSectionDataSource;	// @synthesize=_retainedSectionDataSource
@property(assign, nonatomic) BOOL scrollDisabledForConfirmation;	// @synthesize=_scrollDisabledForConfirmation
@property(assign, nonatomic) id<GKTableViewControllerDataSource> sectionDataSource;	// @synthesize=_sectionDataSource
@property(retain, nonatomic) GKMultiColumnTableViewCell* selectedCell;	// @synthesize=_selectedCell
@property(assign, nonatomic) unsigned selectedColumn;	// @synthesize=_selectedColumn
-(id)init;
-(id)initWithStyle:(int)style;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)cancelSwipeToDeleteConfirmation;
-(int)columnCountForTableView:(id)tableView rowAtIndexPath:(id)indexPath;
// declared property getter: -(float)columnSeparatorWidth;
// declared property getter: -(id)confirmationButton;
// declared property getter: -(id)confirmationClipView;
-(id)contentsAtIndexPaths:(id)indexPaths inTableView:(id)tableView;
-(void)dealloc;
-(void)deleteConfirmationWasTouched:(id)touched;
-(void)didShowMoreRowsForTableView:(id)tableView section:(int)section;
// declared property getter: -(id)editingContentView;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)handleHorizontalSwipeGesture:(id)gesture;
-(void)loadingDidCompleteWithContext:(unsigned long long)loading error:(id)error;
-(unsigned long long)loadingWillBegin;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)prepareDataSource;
-(void)prepareExpensiveVisibleContents;
-(void)reloadView;
// declared property getter: -(id)retainedSectionDataSource;
// declared property getter: -(BOOL)scrollDisabledForConfirmation;
// declared property getter: -(id)sectionDataSource;
-(void)selectColumnInCell:(id)cell;
// declared property getter: -(id)selectedCell;
// declared property getter: -(unsigned)selectedColumn;
// declared property setter: -(void)setColumnSeparatorWidth:(float)width;
// declared property setter: -(void)setConfirmationButton:(id)button;
// declared property setter: -(void)setConfirmationClipView:(id)view;
// declared property setter: -(void)setEditingContentView:(id)view;
// declared property setter: -(void)setRetainedSectionDataSource:(id)source;
// declared property setter: -(void)setScrollDisabledForConfirmation:(BOOL)confirmation;
// declared property setter: -(void)setSectionDataSource:(id)source;
// declared property setter: -(void)setSelectedCell:(id)cell;
// declared property setter: -(void)setSelectedColumn:(unsigned)column;
-(id)swipeConfirmationButtonForView:(id)view withTitle:(id)title;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view indexPathWithColumnForCell:(id)cell withIndexPath:(id)indexPath atPoint:(CGPoint)point;
-(id)tableView:(id)view indexPathWithColumnForCell:(id)cell withIndexPath:(id)indexPath atPoint:(CGPoint)point extendEdgeColumnsToInfinity:(BOOL)infinity;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view prepareContentViewsForCell:(id)cell atIndexPath:(id)indexPath;
-(void)tableView:(id)view refreshCellAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)viewDidDisappear:(BOOL)view;
-(id)visibleContentViews;
-(id)visibleContentViewsForTableView:(id)tableView;
@end
