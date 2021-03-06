/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@class NSOperationQueue;

@interface CMMotionManagerInternal : NSObject {
	int fSampleLock;
	Dispatcher* fAccelerometerDispatcher;
	double fAccelerometerUpdateInterval;
	id fAccelerometerHandler;
	NSOperationQueue* fAccelerometerQueue;
	double fLastAccelerometerNotificationTimestamp;
	Sample fLatestAccelerometerSample;
	Dispatcher* fGyroDispatcher;
	double fGyroUpdateInterval;
	id fGyroHandler;
	NSOperationQueue* fGyroQueue;
	double fLastGyroNotificationTimestamp;
	Sample fLatestGyroSample;
	Dispatcher* fDeviceMotionDispatcher;
	double fDeviceMotionUpdateInterval;
	id fDeviceMotionHandler;
	NSOperationQueue* fDeviceMotionQueue;
	double fLastDeviceMotionNotificationTimestamp;
	Sample fLatestDeviceMotionSample;
	int fAttitudeReferenceFrame;
	void* fCompassCalibrationHud;
	bool fShowCompassCalibrationHudOnResume;
	bool fHaveSentDeviceRequiresMovementError;
	int fGeomagneticModelProviderClient;
	XXStruct_01mbIB fGeomagneticModel;
	bool fHaveSentTrueNorthUnavailableError;
	double fDeviceMotionStartTimestamp;
	Dispatcher* fMagnetometerDispatcher;
	double fMagnetometerUpdateInterval;
	id fMagnetometerHandler;
	NSOperationQueue* fMagnetometerQueue;
	double fLastMagnetometerNotificationTimestamp;
	Sample fLatestMagnetometerSample;
	bool fShowsDeviceMovementDisplay;
	Dispatcher* fPrivateAccelerometerDataDispatcher;
	/*function-pointer*/ void* fPrivateAccelerometerDataCallback;
	void* fPrivateAccelerometerDataCallbackInfo;
	Dispatcher* fPrivateGyroDataDispatcher;
	/*function-pointer*/ void* fPrivateGyroDataCallback;
	void* fPrivateGyroDataCallbackInfo;
	Dispatcher* fPrivateDeviceMotionDispatcher;
	/*function-pointer*/ void* fPrivateDeviceMotionCallback;
	void* fPrivateDeviceMotionCallbackInfo;
	bool fPrivateDeviceMotionUse9Axis;
	bool fPrivateUseAccelerometer;
	bool fInactive;
}
-(id)initWithInfo:(id)info;
-(id).cxx_construct;
-(void)dealloc;
@end

