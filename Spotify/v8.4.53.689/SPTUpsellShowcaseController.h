//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTMetaViewControllerObserver.h"
#import "SPTOfflineModeStateObserver.h"

@class NSString, SPTDataLoader, SPTUpsell, SPTUpsellCompoundLogger, SPTUpsellExperiments, SPTUpsellImage;

@interface SPTUpsellShowcaseController : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver, SPTMetaViewControllerObserver>
{
    id <SPTUpsellConfigurationsJSONParserProtocol> _configurationsJsonParser;
    id <SPTUpsellPresentShowcaseProtocol> _upsellManager;
    SPTDataLoader *_showcaseDataLoader;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTUpsellCompoundLogger *_logger;
    id <SPTOfflineModeState> _offlineState;
    id <SPTMetaViewController> _metaViewController;
    SPTUpsellExperiments *_experiments;
    unsigned long long _controllerState;
    id <SPTDataLoaderCancellationToken> _showcaseRequestToken;
    double _showcaseRequestStartTime;
    double _appUIReadyTime;
    SPTUpsell *_showcaseUpsell;
    SPTUpsellImage *_background;
    SPTUpsellImage *_icon;
}

@property(retain, nonatomic) SPTUpsellImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SPTUpsellImage *background; // @synthesize background=_background;
@property(retain, nonatomic) SPTUpsell *showcaseUpsell; // @synthesize showcaseUpsell=_showcaseUpsell;
@property(nonatomic) double appUIReadyTime; // @synthesize appUIReadyTime=_appUIReadyTime;
@property(nonatomic) double showcaseRequestStartTime; // @synthesize showcaseRequestStartTime=_showcaseRequestStartTime;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> showcaseRequestToken; // @synthesize showcaseRequestToken=_showcaseRequestToken;
@property(nonatomic) unsigned long long controllerState; // @synthesize controllerState=_controllerState;
@property(retain, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(retain, nonatomic) SPTUpsellCompoundLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(retain, nonatomic) SPTDataLoader *showcaseDataLoader; // @synthesize showcaseDataLoader=_showcaseDataLoader;
@property(retain, nonatomic) id <SPTUpsellPresentShowcaseProtocol> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) id <SPTUpsellConfigurationsJSONParserProtocol> configurationsJsonParser; // @synthesize configurationsJsonParser=_configurationsJsonParser;
- (void).cxx_destruct;
- (_Bool)isBlockedForTA;
- (long long)resourceTypeForRequest:(id)arg1;
- (id)showcaseUpsellFromUpsellArray:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)parseShowcaseConfigurationResponse:(id)arg1;
- (void)parseShowcaseImageResourceResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cleanShowcase;
- (void)presentShowcase;
- (void)decorateShowcaseAndPresent;
- (id)showcaseLogMessageList:(_Bool)arg1;
- (id)timeIntervalNumberSinceLaunchUsing:(double)arg1;
- (void)logSuccess;
- (void)logEmptyDelivery;
- (void)logUnknownError;
- (void)logTimeoutError;
- (void)logDataError:(id)arg1 forUrl:(id)arg2;
- (void)logNetworkError:(id)arg1 forUrl:(id)arg2 withStatusCode:(long long)arg3;
- (id)createURLForConfiguration:(long long)arg1 withSourceID:(id)arg2;
- (void)fetchShowcaseConfiguration:(id)arg1;
- (void)fetchShowcaseConfiguration;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (void)checkAppOnline;
- (void)checkAppUIReady;
- (void)dealloc;
- (id)initWithConfigurationsJSONParser:(id)arg1 showcaseDataLoader:(id)arg2 upsellManager:(id)arg3 productInformationController:(id)arg4 logger:(id)arg5 offlineState:(id)arg6 metaViewController:(id)arg7 experiments:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

