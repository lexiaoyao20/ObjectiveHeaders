/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol WLCardGroupsControllerDelegate;

@interface WLCardGroupsController : XXUnknownSuperclass {
@private
	NSMutableArray* _sortedGroups;
	NSMutableDictionary* _bins;
	NSArray* _sortDescriptors;
	id<WLCardGroupsControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<WLCardGroupsControllerDelegate> delegate;	// @synthesize=_delegate
-(id)initWithCards:(id)cards;
-(void)_addGroupForCard:(id)card;
-(id)_binForBundleID:(id)bundleID template:(int)aTemplate;
-(id)_binForCard:(id)card;
-(id)_binForGroup:(id)group;
-(id)_binKeyForBundleID:(id)bundleID template:(int)aTemplate;
-(id)_cardsByUniqueID;
-(id)_currentGroupForCard:(id)card;
-(id)_groupsAcceptingCard:(id)card;
-(void)_insertCard:(id)card withAcceptingGroups:(id)acceptingGroups;
-(unsigned)_insertionIndexForGroup:(id)group;
-(void)_mergeGroups:(id)groups addingOrReplacingCard:(id)card;
-(void)_removeGroup:(id)group;
-(void)_updateGroup:(id)group byAddingOrReplacingCard:(id)card;
-(void)_updateGroup:(id)group byRemovingCard:(id)card;
-(void)addCard:(id)card;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)groupAtIndex:(unsigned)index;
-(unsigned)groupCount;
-(unsigned)groupIndexForCardUniqueID:(id)cardUniqueID;
-(unsigned)indexOfGroup:(id)group;
-(void)removeCard:(id)card;
-(void)setCards:(id)cards;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)updateCard:(id)card;
@end

