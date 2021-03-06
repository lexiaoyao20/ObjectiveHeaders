/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface EAGLSharegroup : XXUnknownSuperclass {
@private
	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;
}
@property(copy, nonatomic) NSString* debugLabel;	// @synthesize
-(id)init;
-(id)initWithAPI:(unsigned)api;
-(id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;
-(unsigned)APIs;
-(void)dealloc;
// declared property getter: -(id)debugLabel;
-(GLISharedRecRef)getGLIShared;
-(void)loadGLIPlugin:(GLDPixelFormatRec*)plugin sharedWithCompute:(BOOL)compute;
// declared property setter: -(void)setDebugLabel:(id)label;
@end

