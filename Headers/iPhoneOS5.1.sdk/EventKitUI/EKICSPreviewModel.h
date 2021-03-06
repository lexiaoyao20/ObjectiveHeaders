/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, NSMutableArray, NSData, NSArray;

__attribute__((visibility("hidden")))
@interface EKICSPreviewModel : XXUnknownSuperclass {
@private
	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
	unsigned _options;
}
@property(readonly, assign, nonatomic) NSArray* allEvents;
@property(readonly, assign, nonatomic) EKEventStore* eventStore;
@property(readonly, assign, nonatomic) int importedEventCount;
@property(readonly, assign, nonatomic) NSArray* importedEvents;
@property(readonly, assign, nonatomic) int totalEventCount;
@property(readonly, assign, nonatomic) int unimportedEventCount;
@property(readonly, assign, nonatomic) NSArray* unimportedEvents;
-(id)initWithICSData:(id)icsdata eventStore:(id)store options:(unsigned)options;
// declared property getter: -(id)allEvents;
-(void)dealloc;
// declared property getter: -(id)eventStore;
-(id)importAllIntoCalendar:(id)calendar;
-(id)importEvent:(id)event intoCalendar:(id)calendar;
// declared property getter: -(int)importedEventCount;
// declared property getter: -(id)importedEvents;
// declared property getter: -(int)totalEventCount;
// declared property getter: -(int)unimportedEventCount;
// declared property getter: -(id)unimportedEvents;
@end

