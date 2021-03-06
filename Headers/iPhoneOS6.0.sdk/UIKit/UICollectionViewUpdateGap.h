/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, NSMutableArray, UICollectionViewUpdateItem;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdateGap : XXUnknownSuperclass {
@private
	UICollectionViewUpdateItem* _firstUpdateItem;
	UICollectionViewUpdateItem* _lastUpdateItem;
	NSMutableArray* _deleteItems;
	NSMutableArray* _insertItems;
	CGRect _beginningRect;
	CGRect _endingRect;
}
@property(assign, nonatomic) CGRect beginningRect;	// @synthesize=_beginningRect
@property(readonly, assign, nonatomic) NSArray* deleteItems;	// @synthesize=_deleteItems
@property(assign, nonatomic) CGRect endingRect;	// @synthesize=_endingRect
@property(retain, nonatomic) UICollectionViewUpdateItem* firstUpdateItem;	// @synthesize=_firstUpdateItem
@property(readonly, assign, nonatomic) BOOL hasInserts;
@property(readonly, assign, nonatomic) NSArray* insertItems;	// @synthesize=_insertItems
@property(readonly, assign, nonatomic) BOOL isDeleteBasedGap;
@property(readonly, assign, nonatomic) BOOL isSectionBasedGap;
@property(retain, nonatomic) UICollectionViewUpdateItem* lastUpdateItem;	// @synthesize=_lastUpdateItem
@property(readonly, assign, nonatomic) NSArray* updateItems;
+(id)gapWithUpdateItem:(id)updateItem;
-(id)init;
-(void)addUpdateItem:(id)item;
// declared property getter: -(CGRect)beginningRect;
-(void)dealloc;
// declared property getter: -(id)deleteItems;
-(id)description;
// declared property getter: -(CGRect)endingRect;
// declared property getter: -(id)firstUpdateItem;
// declared property getter: -(BOOL)hasInserts;
// declared property getter: -(id)insertItems;
// declared property getter: -(BOOL)isDeleteBasedGap;
// declared property getter: -(BOOL)isSectionBasedGap;
// declared property getter: -(id)lastUpdateItem;
// declared property setter: -(void)setBeginningRect:(CGRect)rect;
// declared property setter: -(void)setEndingRect:(CGRect)rect;
// declared property setter: -(void)setFirstUpdateItem:(id)item;
// declared property setter: -(void)setLastUpdateItem:(id)item;
// declared property getter: -(id)updateItems;
@end

