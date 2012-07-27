/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UITableViewDelegate, UITableViewDataSource>
-(BOOL)bccAddressesDirtied;
-(BOOL)canShowFromField;
-(BOOL)canShowImageSizeField;
@optional
-(void)composeBodyFieldDidFinishLoad;
@required
-(int)compositionType;
-(id)currentScaleImageSize;
-(BOOL)hasAttachments;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)addressTableView;
-(void)selectCurrentEntryForFromAddressPickerView:(id)addressPickerView;
-(id)sendingEmailAddressIfExists;
-(BOOL)sendingEmailDirtied;
@end
