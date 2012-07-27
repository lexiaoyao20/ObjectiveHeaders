/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSError.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSError : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	void* _reserved;
	int _code;
	NSString* _domain;
	NSDictionary* _userInfo;
}
+(id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;
-(id)initWithCoder:(id)coder;
-(id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;
-(unsigned long)_cfTypeID;
-(id)_cocoaErrorStringWithKind:(id)kind;
-(id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)key;
-(int)code;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)domain;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
-(id)helpAnchor;
-(id)localizedDescription;
-(id)localizedFailureReason;
-(id)localizedRecoveryOptions;
-(id)localizedRecoverySuggestion;
-(id)recoveryAttempter;
-(id)userInfo;
@end

@interface NSError (NSErrorPrivate)
+(void)_registerBuiltInFormatters;
+(void)_registerFormatter:(/*function-pointer*/ void*)formatter forErrorKey:(id)errorKey parameters:(const char*)parameters;
-(id)_cocoaErrorString:(id)string;
-(id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;
-(int)_collectApplicableUserInfoFormatters:(stat**)formatters max:(int)max;
-(id)_formatCocoaErrorString:(id)string parameters:(const char*)parameters applicableFormatters:(stat**)formatters count:(int)count;
@end

@interface NSError (NSURLExtras)
+(void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;
+(id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;
+(id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;
-(BOOL)_web_errorIsInDomain:(id)domain;
-(id)_web_failingURL;
-(id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;
-(id)_web_localizedDescription;
@end

@interface NSError (NSURLExtrasInternal)
-(id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;
@end
