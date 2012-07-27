/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString* _variable;
}
-(id)initWithCoder:(id)coder;
-(id)initWithObject:(id)object;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)predicateFormat;
-(id)variable;
@end
