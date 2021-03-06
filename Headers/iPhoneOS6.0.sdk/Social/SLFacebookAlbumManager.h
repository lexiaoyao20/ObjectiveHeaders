/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SLFacebookAlbum, ACAccount, NSOperationQueue;
@protocol SLFacebookAlbumManagerDelegate;

@interface SLFacebookAlbumManager : XXUnknownSuperclass {
@private
	BOOL _isCanceled;
	NSOperationQueue* photoQueue;
	id<SLFacebookAlbumManagerDelegate> _delegate;
	ACAccount* _account;
	SLFacebookAlbum* _selectedAlbum;
}
@property(retain) ACAccount* account;	// @synthesize=_account
@property(assign) __weak id<SLFacebookAlbumManagerDelegate> delegate;	// @synthesize=_delegate
@property(retain) SLFacebookAlbum* selectedAlbum;	// @synthesize=_selectedAlbum
-(id)initWithAccount:(id)account;
-(void).cxx_destruct;
-(void)_handleAlbumResponse:(id)response error:(id)error;
// declared property getter: -(id)account;
// declared property getter: -(id)delegate;
-(void)fetchDefaultAlbum:(id)album;
-(void)loadCoverImageForAlbum:(id)album;
-(void)refreshAlbums;
// declared property getter: -(id)selectedAlbum;
// declared property setter: -(void)setAccount:(id)account;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setSelectedAlbum:(id)album;
@end

