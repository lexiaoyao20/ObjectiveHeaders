/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;
	NSURL* _url;
}
-(id)initWithCoder:(id)coder;
-(id)initWithRange:(NSRange)range URL:(id)url;
-(id)URL;
-(BOOL)_adjustRangesWithOffset:(int)offset;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(int)offset;
-(unsigned long long)resultType;
@end
