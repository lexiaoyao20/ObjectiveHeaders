/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
@private
	unsigned char _cfinfo[4];
	unsigned _bits[4];
	void* _callbacks;
	id* _values;
	id* _keys;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectForKey:(id)key;
-(oneway void)release;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)key;
-(id)retain;
-(unsigned)retainCount;
-(void)setObject:(id)object forKey:(id)key;
-(void)setObservationInfo:(void*)info;
@end

