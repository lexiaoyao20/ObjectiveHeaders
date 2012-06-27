/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"

@class AVMediaSelectionOption, NSDictionary, AVAsset, NSArray;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup {
	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _trackIDs;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;
}
-(id)initWithAsset:(id)asset dictionary:(id)dictionary;
-(id)_defaultOption;
-(BOOL)_isAlternateTrackGroup;
-(id)asset;
-(void)dealloc;
-(id)dictionary;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)options;
-(id)trackIDs;
-(id)tracks;
@end
