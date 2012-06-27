/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "NSObject.h"


@protocol ADAdRecipient <NSObject>
-(id)advertisingSection;
-(id)authenticationUserName;
-(void)bannerControllerGranted;
-(void)bannerControllerRevoked;
-(id)identifier;
-(int)internalAdType;
@optional
-(id)modalViewController;
@required
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)serverBannerView;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewWillLoad;
@optional
-(void)serverInterstitialViewExpiredAndWasUnloaded;
@required
-(void)serverStoryboardDidTransitionOut;
@end
