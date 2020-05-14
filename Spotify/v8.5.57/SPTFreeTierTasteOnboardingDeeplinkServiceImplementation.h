//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTAllocationContext;

@interface SPTFreeTierTasteOnboardingDeeplinkServiceImplementation : NSObject <SPTService>
{
    _Bool _isPaidSocialCampaign;
    NSURL *_deeplinkURI;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool isPaidSocialCampaign; // @synthesize isPaidSocialCampaign=_isPaidSocialCampaign;
@property(retain, nonatomic) NSURL *deeplinkURI; // @synthesize deeplinkURI=_deeplinkURI;
- (void).cxx_destruct;
- (void)didUnloadTasteOnboardingService;
- (void)didLoadTasteOnboardingService;
- (void)didReceiveURIOpenAttemptNotification:(id)arg1;
- (void)removeSpotifyURIObserver;
- (void)addSpotifyURIObserver;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

