/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKEffectProperty.h"
#import "GLKit-Structs.h"


@interface GLKEffectPropertyTransform : GLKEffectProperty {
@private
	GLKMatrix4 _modelviewMatrix;
	GLKMatrix4 _projectionMatrix;
	GLKMatrix3 _normalMatrix;
	GLKMatrix4 _invModelviewMatrix;
	GLKMatrix4 _mvpMatrix;
	int _mvpMatrixLoc;
	int _modelviewMatrixLoc;
	int _projectionMatrixLoc;
	int _normalMatrixLoc;
	int _invModelviewMatrixLoc;
}
@property(assign, nonatomic) GLKMatrix4 invModelviewMatrix;	// @synthesize=_invModelviewMatrix
@property(assign, nonatomic) int invModelviewMatrixLoc;	// @synthesize=_invModelviewMatrixLoc
@property(assign, nonatomic) GLKMatrix4 modelviewMatrix;	// @synthesize=_modelviewMatrix
@property(assign, nonatomic) int modelviewMatrixLoc;	// @synthesize=_modelviewMatrixLoc
@property(assign, nonatomic) GLKMatrix4 mvpMatrix;	// @synthesize=_mvpMatrix
@property(assign, nonatomic) int mvpMatrixLoc;	// @synthesize=_mvpMatrixLoc
@property(readonly, assign, nonatomic) GLKMatrix3 normalMatrix;	// @synthesize=_normalMatrix
@property(assign, nonatomic) int normalMatrixLoc;	// @synthesize=_normalMatrixLoc
@property(assign, nonatomic) GLKMatrix4 projectionMatrix;	// @synthesize=_projectionMatrix
@property(assign, nonatomic) int projectionMatrixLoc;	// @synthesize=_projectionMatrixLoc
+(void)setStaticMasksWithVshRoot:(id)vshRoot fshRoot:(id)root;
-(id)init;
-(void)bind;
-(void)dealloc;
-(id)description;
-(void)dirtyAllUniforms;
// declared property getter: -(GLKMatrix4)invModelviewMatrix;
// declared property getter: -(int)invModelviewMatrixLoc;
-(void)loadIdentity:(int)identity;
-(void)loadMatrix:(int)matrix matrix:(GLKMatrix4)matrix2;
// declared property getter: -(GLKMatrix4)modelviewMatrix;
// declared property getter: -(int)modelviewMatrixLoc;
// declared property getter: -(GLKMatrix4)mvpMatrix;
// declared property getter: -(int)mvpMatrixLoc;
// declared property getter: -(GLKMatrix3)normalMatrix;
// declared property getter: -(int)normalMatrixLoc;
// declared property getter: -(GLKMatrix4)projectionMatrix;
// declared property getter: -(int)projectionMatrixLoc;
// declared property setter: -(void)setInvModelviewMatrix:(GLKMatrix4)matrix;
// declared property setter: -(void)setInvModelviewMatrixLoc:(int)loc;
// declared property setter: -(void)setModelviewMatrix:(GLKMatrix4)matrix;
// declared property setter: -(void)setModelviewMatrixLoc:(int)loc;
// declared property setter: -(void)setMvpMatrix:(GLKMatrix4)matrix;
// declared property setter: -(void)setMvpMatrixLoc:(int)loc;
// declared property setter: -(void)setNormalMatrixLoc:(int)loc;
// declared property setter: -(void)setProjectionMatrix:(GLKMatrix4)matrix;
// declared property setter: -(void)setProjectionMatrixLoc:(int)loc;
-(void)setShaderBindings;
@end

