/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {
@private
	AVCaptureFileOutputInternal* _fileOutputInternal;
}
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;
@property(assign, nonatomic) long long maxRecordedFileSize;
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;
@property(readonly, assign, nonatomic) NSURL* outputFileURL;
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;
@property(readonly, assign, nonatomic) long long recordedFileSize;
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;
+(void)initialize;
-(id)init;
-(void)dealloc;
// declared property getter: -(BOOL)isRecording;
-(BOOL)isRecordingPaused;
// declared property getter: -(XXStruct_pwHToB)maxRecordedDuration;
// declared property getter: -(long long)maxRecordedFileSize;
// declared property getter: -(long long)minFreeDiskSpaceLimit;
// declared property getter: -(id)outputFileURL;
-(void)pauseRecording;
-(BOOL)pausesRecordingOnInterruption;
// declared property getter: -(XXStruct_pwHToB)recordedDuration;
// declared property getter: -(long long)recordedFileSize;
-(void)resumeRecording;
// declared property setter: -(void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;
// declared property setter: -(void)setMaxRecordedFileSize:(long long)size;
// declared property setter: -(void)setMinFreeDiskSpaceLimit:(long long)limit;
-(void)setPausesRecordingOnInterruption:(BOOL)interruption;
-(void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;
-(void)stopRecording;
@end
