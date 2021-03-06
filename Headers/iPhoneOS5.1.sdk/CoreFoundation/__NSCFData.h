/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableData.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData {
@private
	unsigned char _cfinfo[4];
	long _length;
	long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)zone;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(unsigned)length;
-(void*)mutableBytes;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(void)setLength:(unsigned)length;
@end

