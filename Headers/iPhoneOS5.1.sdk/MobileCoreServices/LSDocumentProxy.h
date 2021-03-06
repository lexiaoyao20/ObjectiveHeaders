/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
@private
	NSString* _name;
	NSString* _typeIdentifier;
	NSString* _MIMEType;
}
@property(readonly, assign, nonatomic) NSString* MIMEType;	// @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
@property(readonly, assign, nonatomic) NSString* typeIdentifier;	// @synthesize=_typeIdentifier
+(id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;
-(id)initWithName:(id)name type:(id)type MIMEType:(id)type3;
// declared property getter: -(id)MIMEType;
-(void)bind;
-(void)dealloc;
-(id)iconStyleDomain;
// declared property getter: -(id)name;
// declared property getter: -(id)typeIdentifier;
@end

