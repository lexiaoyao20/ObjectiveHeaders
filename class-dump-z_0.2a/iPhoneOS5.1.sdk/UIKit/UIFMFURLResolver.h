/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIFMFURLResolver : UIURLResolver {
@private
	NSArray* _fmfHostPatterns;
	NSArray* _fmfPathPatterns;
}
+(id)urlCacheChangedNotificationName;
+(id)urlCacheName;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
-(BOOL)isFMFURL:(id)fmfurl;
@end
