/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableAttributedString.h"
#import "Foundation-Structs.h"

@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
@private
	NSMutableString* mutableString;
	NSMutableRLEArray* mutableAttributes;
	struct {
		unsigned attributeFixingDisabled : 8;
		unsigned  : 24;
	} fields;
}
+(Class)_mutableStringClass;
-(id)init;
-(id)initWithAttributedString:(id)attributedString;
-(id)initWithCoder:(id)coder;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string attributes:(id)attributes;
-(id)_runArrayHoldingAttributes;
-(void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;
-(id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange*)range inRange:(NSRange)range4;
-(id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(Class)classForCoder;
-(void)dealloc;
-(void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;
-(void)finalize;
-(unsigned)length;
-(void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(void)setAttributes:(id)attributes range:(NSRange)range;
-(id)string;
@end

