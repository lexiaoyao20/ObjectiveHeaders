/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol UIMovieScrubberTrackViewDelegate <NSObject>
@optional
-(void)movieScrubberTrackView:(id)view clampedSizeWidthDelta:(float)delta actualSizeWidthDelta:(float)delta3 originXDelta:(float)delta4 minimumVisibleValue:(float)value maximumVisibleValue:(float)value6;
-(void)movieScrubberTrackViewDidCollapse:(id)movieScrubberTrackView;
-(void)movieScrubberTrackViewDidExpand:(id)movieScrubberTrackView;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)movieScrubberTrackView;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)movieScrubberTrackView;
-(float)movieScrubberTrackViewZoomAnimationDelay:(id)delay;
-(float)movieScrubberTrackViewZoomAnimationDuration:(id)duration;
@end

