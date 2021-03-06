/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKRelation : XXUnknownSuperclass {
@private
	NSString* _entityName;
	BOOL _toMany;
	BOOL _ownsRelated;
	NSString* _inversePropertyName;
}
@property(readonly, assign, nonatomic) NSString* inversePropertyName;
@property(readonly, assign, nonatomic) BOOL ownsRelatedObject;
@property(readonly, assign, nonatomic) BOOL toMany;
+(id)relationWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name;
+(id)relationWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name ownsRelated:(BOOL)related;
-(id)initWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name ownsRelated:(BOOL)related;
-(void)dealloc;
// declared property getter: -(id)inversePropertyName;
// declared property getter: -(BOOL)ownsRelatedObject;
// declared property getter: -(BOOL)toMany;
@end

