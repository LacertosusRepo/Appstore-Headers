//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAdsBaseCosmosBridge;

@interface SPTAdTestingHandler : NSObject
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
}

@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)overrideRequestCountry:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)changeFocusValue:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addStreamTime:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithCosmosBridge:(id)arg1;

@end

