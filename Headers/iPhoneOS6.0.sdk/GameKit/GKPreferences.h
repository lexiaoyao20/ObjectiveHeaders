/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface GKPreferences : XXUnknownSuperclass {
@private
	BOOL _HTTPShouldUsePipelining;
	unsigned _maxDefaultPlayersP2P;
	unsigned _maxDefaultPlayersHosted;
	unsigned _maxDefaultPlayersTurnBased;
	unsigned _maxDefaultGameStateSizeTurnBasedd;
	BOOL _isStoreDemoModeEnabled;
}
@property(assign, nonatomic) BOOL HTTPShouldUsePipelining;	// @synthesize=_HTTPShouldUsePipelining
@property(readonly, assign, nonatomic, getter=isAccountModificationRestricted) BOOL accountModificationRestricted;
@property(readonly, assign, nonatomic, getter=isAddingFriendsRestricted) BOOL addingFriendsRestricted;
@property(assign, nonatomic) BOOL allowUnsignedBag;
@property(readonly, assign, nonatomic, getter=isAppInstallationRestricted) BOOL appInstallationRestricted;
@property(assign, nonatomic) double cacheTTLOverride;
@property(assign, nonatomic) int environment;
@property(assign, nonatomic) BOOL forceRelay;
@property(readonly, assign, nonatomic, getter=isGameCenterRestricted) BOOL gameCenterRestricted;
@property(assign, nonatomic) double garbageCollectionInterval;
@property(assign, nonatomic) BOOL haveReceivedChallenge;
@property(assign, nonatomic) BOOL haveSentChallenge;
@property(assign, nonatomic) BOOL ignoreSandbox;
@property(readonly, assign, nonatomic) BOOL isStoreDemoModeEnabled;	// @synthesize=_isStoreDemoModeEnabled
@property(assign, nonatomic) unsigned long logFilter;
@property(assign, nonatomic) unsigned maxDefaultGameStateSizeTurnBased;	// @synthesize=_maxDefaultGameStateSizeTurnBasedd
@property(assign, nonatomic) unsigned maxDefaultPlayersHosted;	// @synthesize=_maxDefaultPlayersHosted
@property(assign, nonatomic) unsigned maxDefaultPlayersP2P;	// @synthesize=_maxDefaultPlayersP2P
@property(assign, nonatomic) unsigned maxDefaultPlayersTurnBased;	// @synthesize=_maxDefaultPlayersTurnBased
@property(assign, nonatomic) unsigned maxGameStateSizeTurnBased;
@property(assign, nonatomic) unsigned maxPlayersHosted;
@property(assign, nonatomic) unsigned maxPlayersP2P;
@property(assign, nonatomic) unsigned maxPlayersTurnBased;
@property(assign, nonatomic) double minimumCacheTTL;
@property(readonly, assign, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property(assign, nonatomic) BOOL notificationAlertsEnabled;
@property(assign, nonatomic) BOOL notificationBadgesEnabled;
@property(assign, nonatomic, getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property(assign, nonatomic) BOOL notificationSoundsEnabled;
@property(assign, nonatomic) unsigned operationRetryCount;
@property(assign, nonatomic) double operationRetryDelay;
@property(assign, nonatomic) double operationTimeout;
@property(assign, nonatomic) int pipeliningSetting;
@property(assign, nonatomic) BOOL preemptiveRelay;
@property(assign, nonatomic) int pushEnvironment;
@property(assign, nonatomic) BOOL shouldAnnotateImageUsage;
@property(readonly, assign, nonatomic) BOOL shouldDisallowInvitesFromStrangers;
@property(assign, nonatomic) BOOL shouldLinkPlayerToFacebook;
@property(assign, nonatomic) BOOL shouldLinkPlayerToICloud;
@property(assign, nonatomic) BOOL shouldLinkPlayerToTwitter;
@property(assign, nonatomic) BOOL shouldTrackAtlasImageUsage;
@property(assign, nonatomic) BOOL shouldUseTestIcons;
@property(assign, nonatomic) BOOL showPopularityInsteadOfRating;
@property(assign, nonatomic) BOOL showRating;
@property(retain, nonatomic) NSString* storeBagURL;
@property(assign, nonatomic) double terminationInterval;
@property(assign, nonatomic) BOOL useInternalHeader;
@property(assign, nonatomic) BOOL useTestProtocols;
@property(assign, nonatomic) BOOL verboseLogging;
+(id)hostNameForEnvironment:(int)environment;
+(BOOL)isSystemWideNotificationsEnabled;
+(id)sharedPreferences;
-(id)init;
// declared property getter: -(BOOL)HTTPShouldUsePipelining;
// declared property getter: -(BOOL)allowUnsignedBag;
-(BOOL)booleanValueForKey:(CFStringRef)key;
-(BOOL)booleanValueForKey:(CFStringRef)key defaultValue:(BOOL)value;
// declared property getter: -(double)cacheTTLOverride;
// declared property getter: -(int)environment;
// declared property getter: -(BOOL)forceRelay;
// declared property getter: -(double)garbageCollectionInterval;
// declared property getter: -(BOOL)haveReceivedChallenge;
// declared property getter: -(BOOL)haveSentChallenge;
// declared property getter: -(BOOL)ignoreSandbox;
// declared property getter: -(BOOL)isAccountModificationRestricted;
// declared property getter: -(BOOL)isAddingFriendsRestricted;
// declared property getter: -(BOOL)isAppInstallationRestricted;
// declared property getter: -(BOOL)isGameCenterRestricted;
// declared property getter: -(BOOL)isMultiplayerGamingRestricted;
// declared property getter: -(BOOL)isNotificationCenterEnabled;
// declared property getter: -(BOOL)isStoreDemoModeEnabled;
// declared property getter: -(unsigned long)logFilter;
// declared property getter: -(unsigned)maxDefaultGameStateSizeTurnBased;
// declared property getter: -(unsigned)maxDefaultPlayersHosted;
// declared property getter: -(unsigned)maxDefaultPlayersP2P;
// declared property getter: -(unsigned)maxDefaultPlayersTurnBased;
// declared property getter: -(unsigned)maxGameStateSizeTurnBased;
// declared property getter: -(unsigned)maxPlayersHosted;
// declared property getter: -(unsigned)maxPlayersP2P;
// declared property getter: -(unsigned)maxPlayersTurnBased;
// declared property getter: -(double)minimumCacheTTL;
// declared property getter: -(BOOL)notificationAlertsEnabled;
// declared property getter: -(BOOL)notificationBadgesEnabled;
// declared property getter: -(BOOL)notificationSoundsEnabled;
// declared property getter: -(unsigned)operationRetryCount;
// declared property getter: -(double)operationRetryDelay;
// declared property getter: -(double)operationTimeout;
// declared property getter: -(int)pipeliningSetting;
// declared property getter: -(BOOL)preemptiveRelay;
// declared property getter: -(int)pushEnvironment;
// declared property setter: -(void)setAllowUnsignedBag:(BOOL)bag;
-(void)setBooleanValue:(BOOL)value forKey:(CFStringRef)key;
// declared property setter: -(void)setCacheTTLOverride:(double)override;
// declared property setter: -(void)setEnvironment:(int)environment;
// declared property setter: -(void)setForceRelay:(BOOL)relay;
// declared property setter: -(void)setGarbageCollectionInterval:(double)interval;
// declared property setter: -(void)setHTTPShouldUsePipelining:(BOOL)usePipelining;
// declared property setter: -(void)setHaveReceivedChallenge:(BOOL)challenge;
// declared property setter: -(void)setHaveSentChallenge:(BOOL)challenge;
// declared property setter: -(void)setIgnoreSandbox:(BOOL)sandbox;
// declared property setter: -(void)setLogFilter:(unsigned long)filter;
// declared property setter: -(void)setMaxDefaultGameStateSizeTurnBased:(unsigned)based;
// declared property setter: -(void)setMaxDefaultPlayersHosted:(unsigned)hosted;
// declared property setter: -(void)setMaxDefaultPlayersP2P:(unsigned)p;
// declared property setter: -(void)setMaxDefaultPlayersTurnBased:(unsigned)based;
// declared property setter: -(void)setMaxGameStateSizeTurnBased:(unsigned)based;
// declared property setter: -(void)setMaxPlayersHosted:(unsigned)hosted;
// declared property setter: -(void)setMaxPlayersP2P:(unsigned)p;
// declared property setter: -(void)setMaxPlayersTurnBased:(unsigned)based;
// declared property setter: -(void)setMinimumCacheTTL:(double)ttl;
// declared property setter: -(void)setNotificationAlertsEnabled:(BOOL)enabled;
// declared property setter: -(void)setNotificationBadgesEnabled:(BOOL)enabled;
// declared property setter: -(void)setNotificationCenterEnabled:(BOOL)enabled;
// declared property setter: -(void)setNotificationSoundsEnabled:(BOOL)enabled;
// declared property setter: -(void)setOperationRetryCount:(unsigned)count;
// declared property setter: -(void)setOperationRetryDelay:(double)delay;
// declared property setter: -(void)setOperationTimeout:(double)timeout;
// declared property setter: -(void)setPipeliningSetting:(int)setting;
// declared property setter: -(void)setPreemptiveRelay:(BOOL)relay;
// declared property setter: -(void)setPushEnvironment:(int)environment;
// declared property setter: -(void)setShouldAnnotateImageUsage:(BOOL)annotateImageUsage;
// declared property setter: -(void)setShouldLinkPlayerToFacebook:(BOOL)linkPlayerToFacebook;
// declared property setter: -(void)setShouldLinkPlayerToICloud:(BOOL)linkPlayerToICloud;
// declared property setter: -(void)setShouldLinkPlayerToTwitter:(BOOL)linkPlayerToTwitter;
// declared property setter: -(void)setShouldTrackAtlasImageUsage:(BOOL)trackAtlasImageUsage;
// declared property setter: -(void)setShouldUseTestIcons:(BOOL)useTestIcons;
// declared property setter: -(void)setShowPopularityInsteadOfRating:(BOOL)rating;
// declared property setter: -(void)setShowRating:(BOOL)rating;
// declared property setter: -(void)setStoreBagURL:(id)url;
// declared property setter: -(void)setTerminationInterval:(double)interval;
// declared property setter: -(void)setUseInternalHeader:(BOOL)header;
// declared property setter: -(void)setUseTestProtocols:(BOOL)protocols;
// declared property setter: -(void)setVerboseLogging:(BOOL)logging;
// declared property getter: -(BOOL)shouldAnnotateImageUsage;
// declared property getter: -(BOOL)shouldDisallowInvitesFromStrangers;
// declared property getter: -(BOOL)shouldLinkPlayerToFacebook;
// declared property getter: -(BOOL)shouldLinkPlayerToICloud;
// declared property getter: -(BOOL)shouldLinkPlayerToTwitter;
// declared property getter: -(BOOL)shouldTrackAtlasImageUsage;
// declared property getter: -(BOOL)shouldUseTestIcons;
// declared property getter: -(BOOL)showPopularityInsteadOfRating;
// declared property getter: -(BOOL)showRating;
// declared property getter: -(id)storeBagURL;
// declared property getter: -(double)terminationInterval;
-(void)updatePreferences;
// declared property getter: -(BOOL)useInternalHeader;
// declared property getter: -(BOOL)useTestProtocols;
// declared property getter: -(BOOL)verboseLogging;
@end

