/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSData;

@interface NSBigMutableString : NSMutableString {
@private
	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	} flags;
	unsigned length;
	union {
		struct {
			NSData* data;
			char* dataBytes;
		} d;
		struct {
			CFStorageRef storage;
		} s;
	} contents;
}
+(void)initialize;
-(id)initWithStorage:(CFStorageRef)storage length:(unsigned)length isUnicode:(BOOL)unicode;
-(id)initWithString:(id)string;
-(void)_checkForInvalidMutationWithSelector:(SEL)selector;
-(BOOL)_copyStorage:(CFStorageRef*)storage encoding:(unsigned*)encoding;
-(id)_createSubstringWithRange:(NSRange)range;
-(BOOL)_getData:(id*)data encoding:(unsigned*)encoding;
-(BOOL)_isCString;
-(BOOL)_isMarkedAsImmutable;
-(void)_markAsImmutable;
-(id)_newBigSubstringWithRange:(NSRange)range wantsMutable:(BOOL)aMutable zone:(NSZone*)zone;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)range zone:(NSZone*)zone;
-(id)_newSubstringWithRange:(NSRange)range zone:(NSZone*)zone;
-(BOOL)_setData:(id)data encoding:(unsigned)encoding;
-(BOOL)_setStorage:(CFStorageRef)storage encoding:(unsigned)encoding;
-(unsigned short)characterAtIndex:(unsigned)index;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned)length;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
@end

