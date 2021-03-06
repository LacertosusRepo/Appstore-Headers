//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTGeniusCardsViewController, SPTGeniusService;

@interface SPTGeniusScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    SPTGeniusService *_geniusService;
    SPTGeniusCardsViewController *_cardsViewController;
}

@property(readonly, nonatomic) SPTGeniusCardsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
@property(readonly, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
- (void).cxx_destruct;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithGeniusService:(id)arg1 cardsViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

