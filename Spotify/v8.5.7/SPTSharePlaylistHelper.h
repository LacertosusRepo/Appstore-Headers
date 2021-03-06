//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTPlaylistURIResolver, SPTShareTestManager;

@interface SPTSharePlaylistHelper : NSObject
{
    _Bool _allowV2Sharing;
    id <SPTPlaylistURIResolver> _playlistURIResolver;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTShareTestManager> _testManager;
    id <SPTFeatureFlagSignal> _allowV2SharingSignal;
}

@property(nonatomic) _Bool allowV2Sharing; // @synthesize allowV2Sharing=_allowV2Sharing;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> allowV2SharingSignal; // @synthesize allowV2SharingSignal=_allowV2SharingSignal;
@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) id <SPTPlaylistURIResolver> playlistURIResolver; // @synthesize playlistURIResolver=_playlistURIResolver;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)normalizeSharingEntityURI:(id)arg1 withContextSourceURI:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)normalizeContextAwareSharingEntityURI:(id)arg1 withContextSourceURI:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)normalizeURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)normalizeSharingEntityData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaylistURIResolver:(id)arg1 featureFlagFactory:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

