/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)port;
+(id)portWithMachPort:(unsigned)machPort;
-(id)initWithCoder:(id)coder;
-(id)initWithMachPort:(unsigned)machPort;
-(Class)classForCoder;
-(Class)classForPortCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)delegate;
-(void)encodeWithCoder:(id)coder;
-(void)invalidate;
-(BOOL)isValid;
-(unsigned)machPort;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(id)replacementObjectForCoder:(id)coder;
-(unsigned)reservedSpaceLength;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;
-(BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;
-(void)setDelegate:(id)delegate;
@end

