/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class NSArray;

@interface CalendarOccurrencesCollection : XXUnknownSuperclass <NSCopying> {
	NSArray* _occurrences;
	NSArray* _allDayOccurrences;
	NSArray* _timedOccurrences;
	BOOL _timedOccurrencesExtendPastRange;
}
@property(readonly, assign, nonatomic) NSArray* allDayOccurrences;
@property(readonly, assign, nonatomic) NSArray* occurrences;
@property(readonly, assign, nonatomic) NSArray* timedOccurrences;
@property(readonly, assign, nonatomic) BOOL timedOccurrencesExtendPastRange;
-(id)initWithOccurrences:(id)occurrences timedOccurrences:(id)occurrences2 allDayOccurrences:(id)occurrences3 timedOccurrencesExtendPastRange:(BOOL)range;
// declared property getter: -(id)allDayOccurrences;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)occurrences;
// declared property getter: -(id)timedOccurrences;
// declared property getter: -(BOOL)timedOccurrencesExtendPastRange;
@end
