/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "NSObject.h"


@protocol GKTableViewCellContents <NSObject>
@optional
@property(assign, nonatomic) CGRect confirmationButtonRect;
+(float)defaultRowHeight;
// declared property getter: -(CGRect)confirmationButtonRect;
-(float)preferredHeightForOrientation:(int)orientation;
@required
-(void)prepareForReuse;
@optional
// declared property setter: -(void)setConfirmationButtonRect:(CGRect)rect;
-(void)setTheme:(id)theme;
-(id)theme;
@end
