/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GKTableSection.h"

@class NSString, NSIndexSet;

@interface GKFlexibleSpaceSection : XXUnknownSuperclass <GKTableSection> {
@private
	float _maximumHeight;
	float _minimumHeight;
	float _currentHeight;
	float _weighting;
	BOOL _flexible;
	BOOL _needsRedisplay;
}
@property(retain, nonatomic) NSString* abbreviatedTitle;
@property(assign, nonatomic) float currentHeight;	// @synthesize=_currentHeight
@property(assign, nonatomic, getter=isFlexible) BOOL flexible;	// @synthesize=_flexible
@property(retain, nonatomic) NSIndexSet* indexesOfRowsWithLoadedData;
@property(assign, nonatomic) float maximumHeight;	// @synthesize=_maximumHeight
@property(assign, nonatomic) float minimumHeight;	// @synthesize=_minimumHeight
@property(assign, nonatomic) BOOL needsRedisplay;	// @synthesize=_needsRedisplay
@property(retain, nonatomic) NSString* secondaryTitle;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) float weighting;	// @synthesize=_weighting
+(id)flexibleSpaceSection;
-(id)init;
// declared property getter: -(float)currentHeight;
-(float)currentHeightInTableView:(id)tableView;
-(XXStruct_nF0CnD)currentMetricsInTableView:(id)tableView;
-(float)heightForFooterInTableView:(id)tableView;
-(float)heightForHeaderInTableView:(id)tableView;
// declared property getter: -(BOOL)isFlexible;
// declared property getter: -(float)maximumHeight;
// declared property getter: -(float)minimumHeight;
// declared property getter: -(BOOL)needsRedisplay;
-(int)rowCountInTableView:(id)tableView;
// declared property setter: -(void)setCurrentHeight:(float)height;
// declared property setter: -(void)setFlexible:(BOOL)flexible;
// declared property setter: -(void)setMaximumHeight:(float)height;
// declared property setter: -(void)setMinimumHeight:(float)height;
// declared property setter: -(void)setNeedsRedisplay:(BOOL)redisplay;
// declared property setter: -(void)setWeighting:(float)weighting;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
// declared property getter: -(float)weighting;
@end

