/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GKGame.h"

@class GKGameInternal, SSItem, NSNumber, NSString, GKLoadStoreItemContext, NSDate, NSDictionary;

@interface GKGame : XXUnknownSuperclass {
@private
	GKGameInternal* _internal;
	SSItem* _storeItem;
	BOOL _sandboxed;
	GKLoadStoreItemContext* _storeItemLoadContext;
	NSDate* _storeItemLoadExpirationDate;
}
@property(readonly, assign, nonatomic) NSNumber* adamID;	// @dynamic
@property(readonly, assign, nonatomic) NSString* bundleIdentifier;	// @dynamic
@property(readonly, assign, nonatomic) NSString* bundleVersion;	// @dynamic
@property(readonly, assign, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) NSString* defaultCategory;	// @dynamic
@property(readonly, assign, nonatomic) NSNumber* externalVersion;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary* gameDescriptor;
@property(readonly, assign, nonatomic) GKGameInfo gameInfo;
@property(retain, nonatomic) GKGameInternal* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic) NSString* name;	// @dynamic
@property(assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// @dynamic
@property(assign, nonatomic, getter=isSandboxed) BOOL sandboxed;	// @synthesize=_sandboxed
@property(retain, nonatomic) SSItem* storeItem;	// @synthesize=_storeItem
@property(retain, nonatomic) GKLoadStoreItemContext* storeItemLoadContext;	// @synthesize=_storeItemLoadContext
@property(retain, nonatomic) NSDate* storeItemLoadExpirationDate;	// @synthesize=_storeItemLoadExpirationDate
+(id)currentGame;
+(id)defaultGameIconWithStyle:(int)style;
+(BOOL)isGameCenter;
+(void)loadStoreItemsForGames:(id)games withCompletionHandler:(id)completionHandler;
+(void)updateGames:(id)games withCompletionHandler:(id)completionHandler;
-(id)init;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(id)_imageURLForIconStyle:(int)iconStyle;
// declared property getter: -(id)cacheKey;
-(id)cachedIconForStyle:(int)style;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)gameDescriptor;
// declared property getter: -(GKGameInfo)gameInfo;
-(unsigned)hash;
-(id)imageSourceForIconStyle:(int)iconStyle;
// declared property getter: -(id)internal;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isSandboxed;
-(BOOL)isStoreItemUnexpired;
-(id)loadAndRenderIconForStyle:(int)style withImageBrush:(id)imageBrush completionHandler:(id)handler;
-(void)loadIconForStyle:(int)style withCompletionHandler:(id)completionHandler;
-(void)loadRecentFriendPlayersWithCompletionHandler:(id)completionHandler;
-(void)loadStoreItemWithCompletionHandler:(id)completionHandler;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setSandboxed:(BOOL)sandboxed;
// declared property setter: -(void)setStoreItem:(id)item;
// declared property setter: -(void)setStoreItemLoadContext:(id)context;
// declared property setter: -(void)setStoreItemLoadExpirationDate:(id)date;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property getter: -(id)storeItem;
// declared property getter: -(id)storeItemLoadContext;
// declared property getter: -(id)storeItemLoadExpirationDate;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

@interface GKGame (GKInstalledGames)
@property(readonly, assign, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, assign, nonatomic, getter=isInstalled) BOOL installed;	// @dynamic
// declared property getter: -(BOOL)isDownloading;
// declared property getter: -(BOOL)isInstalled;
@end

@interface GKGame (GKSpringboardSupport)
+(void)removeHistoryForGameWithBundleIdentifier:(id)bundleIdentifier completionHandler:(id)handler;
@end

