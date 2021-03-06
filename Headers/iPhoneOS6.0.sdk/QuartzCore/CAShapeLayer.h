/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CALayer.h"
#import "QuartzCore-Structs.h"

@class NSArray, NSString;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;
@property(copy) NSString* fillRule;
@property(copy) NSString* lineCap;
@property(copy) NSArray* lineDashPattern;
@property(assign) float lineDashPhase;
@property(copy) NSString* lineJoin;
@property(assign) float lineWidth;
@property(assign) float miterLimit;
@property(assign) CGPathRef path;
@property(assign) CGColorRef strokeColor;
@property(assign) float strokeEnd;
@property(assign) float strokeStart;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(id)defaultValueForKey:(id)key;
-(Layer*)_copyRenderLayer:(Transaction*)layer layerFlags:(unsigned)flags commitFlags:(unsigned*)flags3;
-(void)_renderForegroundInContext:(CGContextRef)context;
-(bool)_renderLayerDefinesProperty:(unsigned)property;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;
-(void)didChangeValueForKey:(id)key;
// declared property getter: -(CGColorRef)fillColor;
// declared property getter: -(id)fillRule;
-(id)implicitAnimationForKeyPath:(id)keyPath;
// declared property getter: -(id)lineCap;
// declared property getter: -(id)lineDashPattern;
// declared property getter: -(float)lineDashPhase;
// declared property getter: -(id)lineJoin;
// declared property getter: -(float)lineWidth;
// declared property getter: -(float)miterLimit;
// declared property getter: -(CGPathRef)path;
// declared property setter: -(void)setFillColor:(CGColorRef)color;
// declared property setter: -(void)setFillRule:(id)rule;
// declared property setter: -(void)setLineCap:(id)cap;
// declared property setter: -(void)setLineDashPattern:(id)pattern;
// declared property setter: -(void)setLineDashPhase:(float)phase;
// declared property setter: -(void)setLineJoin:(id)join;
// declared property setter: -(void)setLineWidth:(float)width;
// declared property setter: -(void)setMiterLimit:(float)limit;
// declared property setter: -(void)setPath:(CGPathRef)path;
// declared property setter: -(void)setStrokeColor:(CGColorRef)color;
// declared property setter: -(void)setStrokeEnd:(float)end;
// declared property setter: -(void)setStrokeStart:(float)start;
// declared property getter: -(CGColorRef)strokeColor;
// declared property getter: -(float)strokeEnd;
// declared property getter: -(float)strokeStart;
@end

