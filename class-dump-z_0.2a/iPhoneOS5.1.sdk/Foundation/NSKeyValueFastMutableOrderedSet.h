/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueMutatingOrderedSetMethodSet* _mutatingMethods;
}
-(id)_proxyInitWithContainer:(id)container getter:(id)getter;
-(void)_proxyNonGCFinalize;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)insertObjects:(id)objects atIndexes:(id)indexes;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeObjectsAtIndexes:(id)indexes;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;
@end
