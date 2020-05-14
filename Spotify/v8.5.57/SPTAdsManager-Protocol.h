//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTAdNowPlayingRemoteControlPolicy, SPTAdsBaseEntity, SPTNowPlayingManager, SPTNowPlayingNavigationBarModel;

@protocol SPTAdsManager <NSObject>
@property(readonly, nonatomic) _Bool shouldDisallowPause;
@property(readonly, nonatomic) _Bool shouldEnableSkipControl;
@property(readonly, nonatomic) _Bool shouldShowSkipControl;
@property(readonly, nonatomic, getter=isVideoInProgress) _Bool videoInProgress;
@property(readonly, nonatomic) _Bool isVideoCompanionAd;
@property(readonly, nonatomic) _Bool isNowPlayingViewForcedOpen;
@property(readonly, nonatomic) id <SPTAdsBaseEntity> activeAdEntity;
@property(readonly, copy, nonatomic) NSString *actionMessage;
@property(readonly, nonatomic) _Bool isEndOfWatchNow;
@property(readonly, nonatomic, getter=isOptOutAvailable) _Bool optOutAvailable;
@property(readonly, nonatomic, getter=isOptInAvailable) _Bool optInAvailable;
@property(readonly, nonatomic, getter=isBreakInProgress) _Bool breakInProgress;
- (id <SPTAdNowPlayingRemoteControlPolicy>)provideRemoteControlPolicy;
- (void)skipCurrentAd;
- (void)setNowPlayingNavigationBarModel:(id <SPTNowPlayingNavigationBarModel>)arg1;
- (void)setNowPlayingManager:(id <SPTNowPlayingManager>)arg1;
- (void)disableMidrollAdExperience:(_Bool)arg1 playOriginContext:(NSURL *)arg2;
- (void)disablePrerollAdExperience:(_Bool)arg1 featureIdentifier:(NSString *)arg2;
- (_Bool)handleSkip;
- (void)handleAdTap:(NSURL *)arg1;
- (double)skipDelayRemaining:(double)arg1;
@end

