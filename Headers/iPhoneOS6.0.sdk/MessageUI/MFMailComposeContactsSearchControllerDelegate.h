/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "NSObject.h"


@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>
-(void)composeContactsSearchController:(id)controller didSortResults:(id)results;
-(void)composeContactsSearchController:(id)controller finishedWithResults:(BOOL)results;
-(id)sendingAddressForComposeContactsSearchController:(id)composeContactsSearchController;
@end

