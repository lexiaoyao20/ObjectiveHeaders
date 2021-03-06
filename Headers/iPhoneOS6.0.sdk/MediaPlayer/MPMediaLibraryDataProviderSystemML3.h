/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
}
+(BOOL)_isGeniusEnabled;
+(id)_localizedCloudGeniusErrorForError:(id)error;
+(id)_localizedGeniusErrorForError:(id)error;
-(id)_cacheIDForItemIdentifier:(long long)itemIdentifier;
-(id)_cacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;
-(void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;
-(void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)seedItemIdentifiers count:(unsigned)count error:(id*)error;
-(id)errorResolverForMediaItem:(id)mediaItem;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)geniusClusterPlaylist count:(unsigned*)count error:(id*)error;
-(BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;
-(BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;
-(BOOL)isGeniusEnabled;
-(void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;
-(void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;
-(void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
-(void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
-(void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)releaseGeniusClusterPlaylist:(void*)playlist;
-(void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;
@end

