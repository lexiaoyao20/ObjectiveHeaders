/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WLCardBucketTemplate, NSMutableArray;

@interface WLCardBucketView : XXUnknownSuperclass {
@private
	NSMutableArray* _fieldViews;
	WLCardBucketTemplate* _bucketTemplate;
}
@property(readonly, assign, nonatomic) WLCardBucketTemplate* bucketTemplate;	// @synthesize=_bucketTemplate
-(id)initWithBucket:(id)bucket bucketTemplate:(id)aTemplate;
// declared property getter: -(id)bucketTemplate;
-(void)dealloc;
-(void)layoutSubviews;
-(void)presentDiff:(id)diff completion:(id)completion;
-(void)setColorProfile:(id)profile background:(int)background;
@end
