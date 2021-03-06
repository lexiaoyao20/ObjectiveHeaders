/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "PassKit-Structs.h"
#import "SKStoreProductViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSSoftwareLibraryItem, UIActivityIndicatorView, UIButton, UILabel, NSArray, PKLinkedAppUserRatingView, NSDictionary, UIImageView;

@interface PKLinkedAppView : XXUnknownSuperclass <SKStoreProductViewControllerDelegate> {
@private
	NSArray* _storeIDs;
	NSDictionary* _foundStoreItem;
	SSSoftwareLibraryItem* _foundLibraryItem;
	BOOL _appInstalled;
	UIImageView* _iconView;
	UILabel* _tapToOpen;
	UILabel* _appName;
	UIButton* _viewButton;
	UILabel* _appPublisher;
	PKLinkedAppUserRatingView* _userRatingView;
	UILabel* _price;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loadingLabel;
}
@property(retain, nonatomic) UIActivityIndicatorView* activityIndicator;	// @synthesize=_activityIndicator
@property(assign, nonatomic) BOOL appInstalled;	// @synthesize=_appInstalled
@property(retain, nonatomic) UILabel* appName;	// @synthesize=_appName
@property(retain, nonatomic) UILabel* appPublisher;	// @synthesize=_appPublisher
@property(retain, nonatomic) SSSoftwareLibraryItem* foundLibraryItem;	// @synthesize=_foundLibraryItem
@property(retain, nonatomic) NSDictionary* foundStoreItem;	// @synthesize=_foundStoreItem
@property(retain, nonatomic) UIImageView* iconView;	// @synthesize=_iconView
@property(retain, nonatomic) UILabel* loadingLabel;	// @synthesize=_loadingLabel
@property(retain, nonatomic) UILabel* price;	// @synthesize=_price
@property(retain, nonatomic) NSArray* storeIDs;	// @synthesize=_storeIDs
@property(retain, nonatomic) UILabel* tapToOpen;	// @synthesize=_tapToOpen
@property(retain, nonatomic) PKLinkedAppUserRatingView* userRatingView;	// @synthesize=_userRatingView
@property(retain, nonatomic) UIButton* viewButton;	// @synthesize=_viewButton
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame storeIDs:(id)ids;
-(BOOL)_anyAppIsInstalled:(id)installed;
-(void)_buttonPressed:(id)pressed;
-(id)_iconURLFromArtwork:(id)artwork;
-(int)_iconVariantForImage:(id)image;
-(id)_imageForSize:(CGSize)size fromArtwork:(id)artwork;
-(void)_layoutLoadingView;
-(void)_layoutLockupView;
-(id)_priceForItem:(id)item;
-(CGSize)_sizeFromImage:(id)image;
// declared property getter: -(id)activityIndicator;
// declared property getter: -(BOOL)appInstalled;
// declared property getter: -(id)appName;
// declared property getter: -(id)appPublisher;
-(void)dealloc;
// declared property getter: -(id)foundLibraryItem;
// declared property getter: -(id)foundStoreItem;
// declared property getter: -(id)iconView;
-(void)layoutSubviews;
// declared property getter: -(id)loadingLabel;
-(void)performStoreLookup;
// declared property getter: -(id)price;
-(void)productViewControllerDidFinish:(id)productViewController;
-(void)reload;
// declared property setter: -(void)setActivityIndicator:(id)indicator;
// declared property setter: -(void)setAppInstalled:(BOOL)installed;
// declared property setter: -(void)setAppName:(id)name;
// declared property setter: -(void)setAppPublisher:(id)publisher;
// declared property setter: -(void)setFoundLibraryItem:(id)item;
// declared property setter: -(void)setFoundStoreItem:(id)item;
// declared property setter: -(void)setIconView:(id)view;
// declared property setter: -(void)setLoadingLabel:(id)label;
// declared property setter: -(void)setPrice:(id)price;
// declared property setter: -(void)setStoreIDs:(id)ids;
// declared property setter: -(void)setTapToOpen:(id)open;
// declared property setter: -(void)setUserRatingView:(id)view;
// declared property setter: -(void)setViewButton:(id)button;
// declared property getter: -(id)storeIDs;
// declared property getter: -(id)tapToOpen;
// declared property getter: -(id)userRatingView;
// declared property getter: -(id)viewButton;
@end

