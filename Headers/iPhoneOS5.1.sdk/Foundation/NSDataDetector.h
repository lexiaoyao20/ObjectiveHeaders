/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpression.h"


@interface NSDataDetector : NSRegularExpression {
	unsigned long long _types;
}
@property(readonly, assign) unsigned long long checkingTypes;
+(id)dataDetectorWithTypes:(unsigned long long)types error:(id*)error;
+(void)initialize;
-(id)initWithCoder:(id)coder;
-(id)initWithPattern:(id)pattern options:(unsigned)options error:(id*)error;
-(id)initWithTypes:(unsigned long long)types error:(id*)error;
// declared property getter: -(unsigned long long)checkingTypes;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(unsigned)numberOfCaptureGroups;
-(unsigned)options;
-(id)pattern;
@end
