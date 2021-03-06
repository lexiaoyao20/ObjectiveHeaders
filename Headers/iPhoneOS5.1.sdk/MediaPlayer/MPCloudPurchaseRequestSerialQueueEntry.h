/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MPCloudPurchaseRequestSerialQueueEntry : XXUnknownSuperclass {
@private
	id item;
	id block;
	int identifier;
}
@property(copy, nonatomic) id block;	// @synthesize
@property(assign, nonatomic) int identifier;	// @synthesize
@property(retain, nonatomic) id item;	// @synthesize
@property(readonly, assign, nonatomic) NSString* shortDescription;
-(id)initWithItem:(id)item block:(id)block;
// declared property getter: -(id)block;
-(void)dealloc;
-(id)description;
// declared property getter: -(int)identifier;
// declared property getter: -(id)item;
// declared property setter: -(void)setBlock:(id)block;
// declared property setter: -(void)setIdentifier:(int)identifier;
// declared property setter: -(void)setItem:(id)item;
// declared property getter: -(id)shortDescription;
@end

