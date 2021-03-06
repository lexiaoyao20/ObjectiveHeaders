/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL, NSNumber;

@interface SLWeiboUserRecord : XXUnknownSuperclass {
	NSNumber* _uid;
	NSString* _screenName;
	NSString* _weiboIdentifier;
	NSString* _profileImageUrl;
	NSURL* _objectID;
}
@property(copy, nonatomic) NSString* profile_image_url;	// @synthesize=_profileImageUrl
@property(copy, nonatomic) NSString* screen_name;	// @synthesize=_screenName
@property(copy, nonatomic) NSNumber* uid;	// @synthesize=_uid
+(id)userRecordWithDictionaryRepresentation:(id)dictionaryRepresentation;
-(id)initWithCoder:(id)coder;
-(void).cxx_destruct;
-(void)_setValuesFromDictionaryRepresentation:(id)dictionaryRepresentation;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)objectID;
// declared property getter: -(id)profile_image_url;
// declared property getter: -(id)screen_name;
-(void)setObjectID:(id)anId;
// declared property setter: -(void)setProfile_image_url:(id)url;
// declared property setter: -(void)setScreen_name:(id)name;
// declared property setter: -(void)setUid:(id)uid;
// declared property getter: -(id)uid;
@end

