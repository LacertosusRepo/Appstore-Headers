//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTCollectionPlatformConfiguration;

@protocol SPTCollectionPlatformTestManager <NSObject>
@property(readonly, nonatomic, getter=isShowLikeActionInNPVEnabled) _Bool showLikeActionInNPVEnabled;
@property(readonly, nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration;
@end
