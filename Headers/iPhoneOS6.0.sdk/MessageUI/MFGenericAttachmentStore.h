/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class NSMutableArray, NSObject, NSArray, MFConditionLock;
@protocol OS_dispatch_queue;

@interface MFGenericAttachmentStore : XXUnknownSuperclass {
@private
	CFDictionaryRef _attachmentSizes;
	NSMutableArray* _attachmentsOrder;
	unsigned _size;
	NSObject<OS_dispatch_queue>* _scalingQueue;
	MFConditionLock* _scalingThrottle;
	int _pendingImageScalingOperations;
	BOOL _outgoing;
	BOOL _didCancelImageScalingOperations;
	BOOL _isScalingEnabled;
	BOOL _isScalingThrottled;
}
@property(readonly, assign, nonatomic) NSArray* attachments;
@property(assign, nonatomic) BOOL scalingThrottled;	// @synthesize=_isScalingThrottled
+(void)addAttachmentUniqueIdentifierStore:(id)store;
+(void)beginPreventingInlinePDFs;
+(void)endPreventingInlinePDFs;
+(BOOL)isPreventingInlinePDFs;
-(id)initOutgoing;
-(void)_decrementPendingImageScalingOperations;
-(void)_enqueueScaleAttachment:(id)attachment withFlags:(unsigned)flags originalSize:(unsigned)size;
-(void)_inrementPendingImageScalingOperations;
-(void)_notifyAttachmentCachedSizesChanged;
-(BOOL)addAttachment:(id)attachment;
-(BOOL)addAttachment:(id)attachment allowingOverride:(id)override;
// declared property getter: -(id)attachments;
-(void)cancelImageScalingOperations;
-(void)dealloc;
-(id)description;
-(BOOL)didCancelImageScalingOperations;
-(BOOL)hasPendingImageScalingOperations;
-(void)removeAttachmentForURL:(id)url;
-(void)removeAttachmentsForURLs:(id)urls;
// declared property getter: -(BOOL)scalingThrottled;
-(BOOL)setAttachment:(id)attachment forURL:(id)url;
// declared property setter: -(void)setScalingThrottled:(BOOL)throttled;
-(unsigned long)sizeForScale:(unsigned)scale imagesOnly:(BOOL)only;
@end

