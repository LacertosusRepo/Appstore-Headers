//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSComponentLayoutManager.h"

@protocol SPTUpsellExperimentationTestManager;

@interface SPTUpsellExperimentationFreetierAlbumComponentLayoutManager : EXP_HUGSComponentLayoutManager
{
    id <SPTUpsellExperimentationTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTUpsellExperimentationTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (id)initWithTheme:(id)arg1 testManager:(id)arg2;

@end
