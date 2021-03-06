//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdSlateContentUnitProviderObserver-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"

@class NSString, SPTAdSponsoredSessionContentUnitProvider;
@protocol SPTAdsManager, SPTSlate, SPTSlateManager;

@interface SPTAdSponsoredSessionController : NSObject <SPTAdSlateContentUnitProviderObserver, SPTSlateDelegate>
{
    SPTAdSponsoredSessionContentUnitProvider *_contentUnitProvider;
    id <SPTAdsManager> _adsManager;
    id <SPTSlateManager> _slateManager;
    id <SPTSlate> _slate;
}

@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTAdSponsoredSessionContentUnitProvider *contentUnitProvider; // @synthesize contentUnitProvider=_contentUnitProvider;
- (void).cxx_destruct;
- (void)slateWillDismiss:(id)arg1;
- (void)provider:(id)arg1 slate:(id)arg2;
- (void)dealloc;
- (id)initWithContentUnitProvider:(id)arg1 adsManager:(id)arg2 slateManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

