/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKEventAttendeePickerDelegate <NSObject>
-(void)eventAttendeePicker:(id)picker cacheValidationStatus:(int)status forEmail:(id)email;
-(int)eventAttendeePicker:(id)picker getValidationStatusForEmailAddress:(id)emailAddress;
@end
