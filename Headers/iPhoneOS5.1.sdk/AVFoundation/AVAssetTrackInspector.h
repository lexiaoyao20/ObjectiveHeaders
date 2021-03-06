/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "AVFigObjectInspector.h"

@class NSLocale, AVWeakReference, NSArray, NSString;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference* _weakReference;
}
@property(readonly, assign, nonatomic) NSArray* availableMetadataFormats;
@property(readonly, assign, nonatomic) NSArray* commonMetadata;
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) float estimatedDataRate;
@property(readonly, assign, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property(readonly, assign, nonatomic) NSString* extendedLanguageTag;
@property(readonly, assign, nonatomic) NSArray* formatDescriptions;
@property(readonly, assign, nonatomic) NSString* languageCode;
@property(readonly, assign, nonatomic) int layer;
@property(readonly, assign, nonatomic) NSLocale* locale;
@property(readonly, assign, nonatomic) NSString* mediaType;
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) int naturalTimeScale;
@property(readonly, assign, nonatomic) float nominalFrameRate;
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;
@property(readonly, assign, nonatomic) float preferredVolume;
@property(readonly, assign, nonatomic) NSArray* segments;
@property(readonly, assign, nonatomic, getter=isSelfContained) BOOL selfContained;
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;
@property(readonly, assign, nonatomic) long long totalSampleDataLength;
@property(readonly, assign, nonatomic) int trackID;
+(id)assetTrackInspectorWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(id)init;
-(id)_initWithAsset:(id)asset trackID:(int)anId;
-(id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(id)_initWithAsset:(id)asset trackIndex:(long)index;
-(id)_weakReference;
// declared property getter: -(id)availableMetadataFormats;
// declared property getter: -(id)commonMetadata;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(float)estimatedDataRate;
// declared property getter: -(id)extendedLanguageTag;
// declared property getter: -(id)formatDescriptions;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(BOOL)isExcludedFromAutoselectionInTrackGroup;
// declared property getter: -(BOOL)isPlayable;
// declared property getter: -(BOOL)isSelfContained;
// declared property getter: -(id)languageCode;
// declared property getter: -(int)layer;
-(void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;
// declared property getter: -(id)locale;
// declared property getter: -(id)mediaType;
-(id)metadataForFormat:(id)format;
// declared property getter: -(CGSize)naturalSize;
// declared property getter: -(int)naturalTimeScale;
// declared property getter: -(float)nominalFrameRate;
// declared property getter: -(CGAffineTransform)preferredTransform;
// declared property getter: -(float)preferredVolume;
-(XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;
-(id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;
// declared property getter: -(id)segments;
-(int)statusOfValueForKey:(id)key error:(id*)error;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
// declared property getter: -(long long)totalSampleDataLength;
// declared property getter: -(int)trackID;
@end

