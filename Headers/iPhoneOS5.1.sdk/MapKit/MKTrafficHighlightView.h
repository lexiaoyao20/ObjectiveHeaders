/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSTimer, NSOperation;

__attribute__((visibility("hidden")))
@interface MKTrafficHighlightView : XXUnknownSuperclass {
	XXStruct_Yvvv9D _visibleMapRect;
	float _zoomScale;
	float _screenScale;
	unsigned _zoomLevel;
	unsigned char _tileType;
	NSTimer* _showTimer;
	NSOperation* _drawOperation;
	NSOperationQueue* _drawOperationQueue;
}
-(id)initWithFrame:(CGRect)frame;
-(id)_imageForRect:(CGRect)rect;
-(XXStruct_Yvvv9D)_mapRectForRect:(CGRect)rect;
-(CGRect)_rectForMapRect:(XXStruct_Yvvv9D)mapRect;
-(void)_show;
-(void)beginPulsing;
-(void)dealloc;
-(void)endPulsing;
-(void)setHidden:(BOOL)hidden;
-(void)setNeedsDisplayInTileKey:(GEOTileKey*)tileKey;
-(void)setVisibleMapRect:(XXStruct_Yvvv9D)rect zoomScale:(float)scale zoomLevel:(int)level tileType:(unsigned char)type;
-(void)willMoveToWindow:(id)window;
@end

