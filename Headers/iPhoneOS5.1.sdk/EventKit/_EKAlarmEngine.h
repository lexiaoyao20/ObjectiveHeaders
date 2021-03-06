/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "CLLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PCPersistentTimer, NSTimer, NSDate, NSDateFormatter, CLLocationManager;

@interface _EKAlarmEngine : XXUnknownSuperclass <CLLocationManagerDelegate> {
	int _lastDBSequence;
	dispatch_queue_s* _dispatchQueue;
	NSDate* _nextFireDate;
	double _lastCheckpoint;
	PCPersistentTimer* _timer;
	BOOL _populating;
	double _populateStart;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	BOOL _shouldUpdateWithForceForAlarmTable;
	BOOL _shouldUpdateWithForceForFences;
	BOOL _abortedLastAttemptToAdjustFences;
	NSDateFormatter* _dateFormatter;
	CLLocationManager* _locationManager;
	double _defaultRadius;
	NSDate* _tomorrow;
}
+(id)sharedInstance;
-(void)_adjustFences:(id)fences;
-(void)_databaseChanged;
-(id)_dateFormatter;
-(BOOL)_haveAlarmsChanged:(id)changed;
-(BOOL)_isDataProtected;
-(void)_killSyncTimer;
-(void)_killTimer;
-(void)_locationDaemonDidLaunch;
-(void)_notifyAlarmsFired:(id)fired;
-(BOOL)_populateAlarmTable:(id)table;
-(void)_populateFinished;
-(void)_protectedDataDidBecomeAvailable;
-(void)_protectedDataWillBecomeUnavailable;
-(void)_proximityAlertTriggered:(id)triggered entered:(BOOL)entered;
-(void)_removeAllFences;
-(void)_rescheduleTimer;
-(void)_resetSyncTimer;
-(BOOL)_shouldAdjustFencesWithStatus:(int)status;
-(void)_storeAlarms:(id)alarms nextScheduleLimit:(double)limit eventStore:(id)store;
-(id)_stringForAuthorizationStatus:(int)authorizationStatus;
-(void)_syncDidEnd;
-(void)_syncDidStart;
-(void)_syncTimerFired:(id)fired;
-(void)_timeDidChangeSignificantly;
-(void)_timeZoneChanged:(id)changed;
-(void)_timerFired:(id)fired;
-(void)_updateWithForce:(BOOL)force;
-(void)_updateWithForceForAlarmTable:(BOOL)alarmTable forFences:(BOOL)fences;
-(void)dealloc;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)locationManager:(id)manager didEnterRegion:(id)region;
-(void)locationManager:(id)manager didExitRegion:(id)region;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;
-(void)reschedule;
-(void)start;
-(void)stop;
@end

