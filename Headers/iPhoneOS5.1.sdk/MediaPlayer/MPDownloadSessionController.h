/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SSDownloadHandlerDelegate.h"

@class NSMutableDictionary, SSDownloadHandler, NSMutableArray, NSMutableSet;

@interface MPDownloadSessionController : XXUnknownSuperclass <SSDownloadHandlerDelegate> {
@private
	dispatch_queue_s* _activePurchasesQueue;
	NSMutableSet* _alertViews;
	dispatch_queue_s* _dispatchQueue;
	dispatch_queue_s* _downloadSessionQueue;
	SSDownloadHandler* _downloadHandler;
	NSMutableArray* _downloadSessions;
	NSMutableSet* _playerItems;
	dispatch_source_s* _progressTimer;
	dispatch_queue_s* _purchaseQueue;
	NSMutableDictionary* _purchases;
	NSMutableSet* _pendingCancellations;
}
+(id)downloadSessionController;
+(void)enableDownloadSessions;
-(id)init;
-(void)_cellularRestrictionsChangedNotification:(id)notification;
-(void)_closeSessionForAsset:(id)asset;
-(void)_downloadAssetForMediaItem:(id)mediaItem forPlayback:(BOOL)playback completionHandler:(id)handler;
-(void)_downloadAssetsForMediaItems:(id)mediaItems completionHandler:(id)handler;
-(void)_downloadCompleteNotification:(id)notification;
-(void)_downloadFailedNotification:(id)notification;
-(id)_downloadSessionForAVAsset:(id)avasset;
-(id)_downloadSessionWithID:(id)anId;
-(BOOL)_networkIsSufficientForPlayback;
-(id)_openSessionWithProperties:(id)properties style:(int*)style;
-(void)_setMediaItem:(id)item isTemporaryDownload:(BOOL)download;
-(BOOL)_showCellularRestrictedDialogForMediaItem:(id)mediaItem;
-(BOOL)_showNoNetworkDialogForMediaItem:(id)mediaItem;
-(void)_snapshotSessionProgress;
-(void)_startProgressTimer;
-(void)_stopProgressTimer;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)canOpenSessionWithMediaItem:(id)mediaItem;
-(void)cancelDownloadForMediaItemWithPersistentID:(id)persistentID;
-(void)dealloc;
-(void)downloadAssetForMediaItem:(id)mediaItem completionHandler:(id)handler;
-(void)downloadAssetsForMediaItems:(id)mediaItems completionHandler:(id)handler;
-(void)downloadHandler:(id)handler cancelSession:(id)session;
-(void)downloadHandler:(id)handler handleSession:(id)session;
-(id)downloadPropertiesForDownloadIdentifier:(id)downloadIdentifier;
-(BOOL)isDownloadInProgressForMediaItem:(id)mediaItem isPlaybackDownload:(BOOL*)download;
-(BOOL)isDownloadInProgressForMediaItemWithPersistentID:(id)persistentID isPlaybackDownload:(BOOL*)download;
-(BOOL)isSessionRequiredToPlayMediaItem:(id)playMediaItem;
-(id)openSessionWithMediaItem:(id)mediaItem;
-(id)openSessionWithProperties:(id)properties;
-(BOOL)prioritizeSessionForAVItem:(id)avitem;
-(void)registerAVItem:(id)item;
-(BOOL)showNetworkConstraintDialogForMediaItem:(id)mediaItem;
-(void)unregisterAVItem:(id)item;
@end

