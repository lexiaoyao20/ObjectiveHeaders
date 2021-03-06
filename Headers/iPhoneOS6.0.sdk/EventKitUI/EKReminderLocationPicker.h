/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "EKReminderLocationPickerModelDelegate.h"
#import "EKReminderLocationPickerCellButtonHandler.h"
#import "UITextFieldDelegate.h"

@class EKReminderLocationPickerCell, EKReminderLocationPickerModel, UIAlertView;
@protocol EKStyleProvider, EKReminderLocationPickerDelegate;

@interface EKReminderLocationPicker : XXUnknownSuperclass <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate, UITextFieldDelegate, EKReminderLocationPickerCellButtonHandler> {
@private
	EKReminderLocationPickerModel* _model;
	id<EKStyleProvider> _styleProvider;
	int _savedStatusBarStyle;
	UIAlertView* _meCardAlert;
	EKReminderLocationPickerCell* _currentLocationCell;
	EKReminderLocationPickerCell* _typedLocationCell;
	BOOL _hasEditedText;
	BOOL _isShowingPeopleAddressPicker;
	BOOL _allowsShowInMap;
	BOOL _isEditingContactAddress;
	BOOL _ignoreNextSelectionChange;
	id<EKReminderLocationPickerDelegate> _locationPickerDelegate;
}
@property(assign, nonatomic) id<EKReminderLocationPickerDelegate> locationPickerDelegate;	// @synthesize=_locationPickerDelegate
-(id)initWithModel:(id)model styleProvider:(id)provider;
-(int)_accessoryTypeForLocationItem:(id)locationItem isSelected:(BOOL)selected;
-(void)_dismissPeoplePicker;
-(id)_indexPathForSelectedItem;
-(BOOL)_isCustomLocationRow:(id)row;
-(id)_prepareCurrentLocationCell;
-(id)_prepareTypedLocationCell;
-(void)_presentPersonPicker;
-(void)_reloadCustomLocationRow;
-(void)_removeExistingMeCardAlert;
-(void)_setCell:(id)cell checked:(BOOL)checked;
-(void)_setLocationFromRecord:(void*)record multiValueIdentifier:(int)identifier;
-(BOOL)_shouldShowTypedLocation;
-(void)_showPickMeCardAlertIfNecessary;
-(void)_styleCell:(id)cell;
-(void)_typedLocationCellTextDidChange;
-(void)_updateAccessoryViewForTypedLocation;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)contactsButtonPressed;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
-(void)failureButtonPressed;
// declared property getter: -(id)locationPickerDelegate;
-(void)locationPickerModel:(id)model didEncounterError:(id)error;
-(void)locationPickerModel:(id)model didUpdateMeCardItem:(int)item;
-(void)locationPickerModelDidBeginOperation:(id)locationPickerModel;
-(void)locationPickerModelDidChangeSelection:(id)locationPickerModel;
-(void)locationPickerModelDidEndOperation:(id)locationPickerModel;
-(void)locationPickerModelDidUpdateCurrentLocation:(id)locationPickerModel;
-(void)locationPickerModelDidUpdateCustomLocation:(id)locationPickerModel;
-(float)marginForTableView:(id)tableView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person withLinkedPeople:(CFArrayRef)linkedPeople;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
// declared property setter: -(void)setLocationPickerDelegate:(id)delegate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)textFieldClearButtonPressed:(id)pressed;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)view;
@end

