/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"


@interface NSCheapMutableString : NSMutableString {
@private
	union {
		unsigned short* fat;
		char* thin;
	} contents;
	fields flags;
	unsigned numCharacters;
	void* _reserved;
}
-(const char*)cString;
-(unsigned)cStringLength;
-(unsigned short)characterAtIndex:(unsigned)index;
-(void)dealloc;
-(unsigned)fastestEncoding;
-(void)finalize;
-(BOOL)getBytes:(void*)bytes maxLength:(unsigned)length usedLength:(unsigned*)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange*)range7;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned)length;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)copy length:(unsigned)length freeWhenDone:(BOOL)done isUnicode:(BOOL)unicode;
@end
