//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierTasteOnboardingUpdateTasteViewModel.h"

@class SPTFreeTierTasteOnboardingSession, SPTSeedASessionCurator;
@protocol SPTViewLogger;

@interface SPTSeedASessionUpdateViewModel : SPTFreeTierTasteOnboardingUpdateTasteViewModel
{
    _Bool _includeSimilarArtists;
    SPTSeedASessionCurator *_curator;
    SPTFreeTierTasteOnboardingSession *_session;
    long long _seedASessionVisualTreatment;
    id <SPTViewLogger> _viewLogger;
    unsigned long long _minCompleteTime;
}

@property(nonatomic) unsigned long long minCompleteTime; // @synthesize minCompleteTime=_minCompleteTime;
@property(readonly, nonatomic) _Bool includeSimilarArtists; // @synthesize includeSimilarArtists=_includeSimilarArtists;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) long long seedASessionVisualTreatment; // @synthesize seedASessionVisualTreatment=_seedASessionVisualTreatment;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SPTSeedASessionCurator *curator; // @synthesize curator=_curator;
- (void).cxx_destruct;
- (void)seedASessionDidFailCuration;
- (void)seedASessionDidFinishCuration:(id)arg1;
- (void)completeSeedASessionAt:(unsigned long long)arg1 withPlaylistURI:(id)arg2;
- (void)startUpdate;
- (id)messageText;
- (id)initWithTheme:(id)arg1 curator:(id)arg2 testManager:(id)arg3 session:(id)arg4 viewLogger:(id)arg5 seedASessionVisualTreatment:(long long)arg6 includeSimilarArtists:(_Bool)arg7;

@end

