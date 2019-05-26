//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class FollowModel, NSURL;
@protocol SPTCollectionPlatformConfiguration, SPTFollowFeatureLogger;

@interface SPTFollowBanArtistAction : SPAction
{
    FollowModel *_followModel;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFollowFeatureLogger> _followLogger;
    NSURL *_link;
}

@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) id <SPTFollowFeatureLogger> followLogger; // @synthesize followLogger=_followLogger;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)style;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithFollowModel:(id)arg1 collectionConfiguration:(id)arg2 followLogger:(id)arg3 logContext:(id)arg4 link:(id)arg5;

@end
