/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIViewController.h"

@class UITableViewDataSource, UIRefreshControl, UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	int _tableViewStyle;
	id _keyboardSupport;
	id _staticDataSource;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _tableViewControllerFlags;
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property(retain, nonatomic) UIRefreshControl* refreshControl;
@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource* staticDataSource;
@property(retain, nonatomic) UITableView* tableView;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithStyle:(int)style;
-(void)_adjustTableForKeyboardInfo:(id)keyboardInfo;
-(id)_existingTableView;
// declared property setter: -(void)_setStaticDataSource:(id)source;
// declared property getter: -(id)_staticDataSource;
// declared property getter: -(BOOL)clearsSelectionOnViewWillAppear;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)refreshControl;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setClearsSelectionOnViewWillAppear:(BOOL)appear;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
// declared property setter: -(void)setRefreshControl:(id)control;
// declared property setter: -(void)setTableView:(id)view;
// declared property getter: -(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

