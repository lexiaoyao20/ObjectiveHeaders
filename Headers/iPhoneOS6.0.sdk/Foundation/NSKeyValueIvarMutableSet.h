/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
@private
	objc_ivar* _ivar;
}
+(XXStruct_1UKQIB*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)container getter:(id)getter;
-(void)_proxyNonGCFinalize;
-(void)addObject:(id)object;
-(void)addObjectsFromArray:(id)array;
-(unsigned)count;
-(void)intersectSet:(id)set;
-(id)member:(id)member;
-(void)minusSet:(id)set;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(void)setSet:(id)set;
-(void)unionSet:(id)set;
@end
