/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, NSString;

@interface SLFacebookPostPrivacySetting : XXUnknownSuperclass <NSCoding> {
@private
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _parameters;
	int _type;
}
@property(retain) NSString* identifier;	// @synthesize=_identifier
@property(retain) NSString* name;	// @synthesize=_name
@property(retain) NSDictionary* parameters;	// @synthesize=_parameters
@property(assign) int type;	// @synthesize=_type
+(id)postPrivacySettingWithIdentifier:(id)identifier name:(id)name type:(int)type parameters:(id)parameters;
-(id)initWithCoder:(id)coder;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)identifier;
// declared property getter: -(id)name;
// declared property getter: -(id)parameters;
-(id)parametersJSONStringRepresentation;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setParameters:(id)parameters;
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
@end

