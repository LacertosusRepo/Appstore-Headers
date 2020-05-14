//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFeatureFlagSignal, SPTPodcastTestManager, SPTProductState;

@interface SPTSearch2RequestParametersProvider : NSObject
{
    _Bool _topicsEnabled;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _freeTierSignal;
}

@property(readonly, nonatomic) _Bool topicsEnabled; // @synthesize topicsEnabled=_topicsEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (void).cxx_destruct;
- (unsigned long long)entityVersion;
- (id)makeDefaultSearchRequestParameters;
- (id)initWithPodcastService:(id)arg1 sessionService:(id)arg2 topicsEnabled:(_Bool)arg3;

@end

