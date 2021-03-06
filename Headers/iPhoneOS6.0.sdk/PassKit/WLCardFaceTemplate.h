/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WLCardFieldTemplate, NSMutableArray;

@interface WLCardFaceTemplate : XXUnknownSuperclass {
@private
	float _barcodeVerticalInset;
	WLCardFieldTemplate* _defaultFieldTemplate;
	NSMutableArray* _bucketTemplates;
}
@property(assign, nonatomic) float barcodeBottomInset;	// @synthesize=_barcodeVerticalInset
@property(retain, nonatomic) NSMutableArray* bucketTemplates;	// @synthesize=_bucketTemplates
@property(retain, nonatomic) WLCardFieldTemplate* defaultFieldTemplate;	// @synthesize=_defaultFieldTemplate
-(void)addBucketTemplate:(id)aTemplate;
// declared property getter: -(float)barcodeBottomInset;
// declared property getter: -(id)bucketTemplates;
-(void)dealloc;
// declared property getter: -(id)defaultFieldTemplate;
// declared property setter: -(void)setBarcodeBottomInset:(float)inset;
// declared property setter: -(void)setBucketTemplates:(id)templates;
// declared property setter: -(void)setDefaultFieldTemplate:(id)aTemplate;
-(id)templateForBucketAtIndex:(unsigned)index;
@end

