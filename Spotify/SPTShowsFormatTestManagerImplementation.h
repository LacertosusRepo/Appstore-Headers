//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTShowsFormatTestManager.h"

@class NSString;

@interface SPTShowsFormatTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTShowsFormatTestManager>
{
    _Bool _tapToPlayEnabled;
    _Bool _heartsEverywhereEnabled;
    _Bool _audioCellQuickActionsEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFreeTierPreCurationTestManager> _preCurationTestManager;
    id <SPTFeatureFlagSignal> _tapToPlaySignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereSignal;
}

@property(nonatomic, getter=isAudioCellQuickActionsEnabled) _Bool audioCellQuickActionsEnabled; // @synthesize audioCellQuickActionsEnabled=_audioCellQuickActionsEnabled;
@property(nonatomic, getter=isHeartsEverywhereEnabled) _Bool heartsEverywhereEnabled; // @synthesize heartsEverywhereEnabled=_heartsEverywhereEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereSignal; // @synthesize heartsEverywhereSignal=_heartsEverywhereSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> tapToPlaySignal; // @synthesize tapToPlaySignal=_tapToPlaySignal;
@property(nonatomic, getter=isTapToPlayEnabled) _Bool tapToPlayEnabled; // @synthesize tapToPlayEnabled=_tapToPlayEnabled;
@property(readonly, nonatomic) id <SPTFreeTierPreCurationTestManager> preCurationTestManager; // @synthesize preCurationTestManager=_preCurationTestManager;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupTapToPlay;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 heartsEverywhereSignal:(id)arg2 preCurationTestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

