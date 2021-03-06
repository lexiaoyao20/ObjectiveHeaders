/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"


@interface EKStringFactory : XXUnknownSuperclass {
	CFDateFormatterRef _dayFormatter;
	CFDateFormatterRef _abbrevDayFormatter;
	CFDateFormatterRef _timeFormatter;
	CFDateFormatterRef _standardTimeFormatter;
	CFDateFormatterRef _customFormatter;
}
+(id)sharedInstance;
-(id)init;
-(CFDateFormatterRef)_customFormatter;
-(id)_dayStringForDate:(double)date allDay:(BOOL)day shortFormat:(BOOL)format lowercase:(BOOL)lowercase;
-(void)_invalidateFormatters;
-(void)_localeChanged:(id)changed;
-(id)_stringForDateTime:(XXStruct_lQVxyC)dateTime timeZone:(CFTimeZoneRef)zone;
-(id)_stringForDay:(XXStruct_lQVxyC)day withLongFormatString:(id)longFormatString useAbbreviatedFormats:(BOOL)formats;
-(id)_stringForDay:(XXStruct_lQVxyC)day withLongFormatString:(id)longFormatString useAbbreviatedFormats:(BOOL)formats lowerCase:(BOOL)aCase;
-(id)_stringForTime:(XXStruct_lQVxyC)time;
-(id)_timeStringForDate:(double)date;
-(CFDateFormatterRef)abbreviatedDayFormatter;
-(id)abbreviatedStringForDay:(XXStruct_lQVxyC)day withLongFormatString:(id)longFormatString;
-(id)dateStringForDate:(double)date allDay:(BOOL)day shortFormat:(BOOL)format;
-(id)dateStringForDate:(double)date allDay:(BOOL)day standalone:(BOOL)standalone shortFormat:(BOOL)format;
-(id)dateStringForEventInvitation:(id)eventInvitation;
-(CFDateFormatterRef)dayFormatter;
-(void)dealloc;
-(CFDateFormatterRef)standardTimeFormatter;
-(id)stringForDay:(XXStruct_lQVxyC)day withLongFormatString:(id)longFormatString;
-(id)stringForDay:(XXStruct_lQVxyC)day withLongFormatString:(id)longFormatString lowercase:(BOOL)lowercase;
-(CFDateFormatterRef)timeFormatter;
-(id)timeStringForDate:(double)date inTimeZone:(id)timeZone;
@end

