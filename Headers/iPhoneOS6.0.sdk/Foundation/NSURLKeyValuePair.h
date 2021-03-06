/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject {
@private
	id key;
	id value;
	unsigned hash;
}
+(id)pair;
+(id)pairWithKey:(id)key value:(id)value;
-(id)initWithKey:(id)key value:(id)value;
-(void)dealloc;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)key;
-(void)setKey:(id)key;
-(void)setValue:(id)value;
-(id)value;
@end

