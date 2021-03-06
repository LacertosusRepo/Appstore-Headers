//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFeatureSettingsUIProvider.h"

@class NSMutableArray, NSString, SPTDataLoader, SPTSettingsTableViewCell, SPTUpsell, SPTUpsellActionFactory, SPTUpsellConfigurationsController, SPTUpsellConfigurationsJSONParser, SPTUpsellExperiments, SPTUpsellImage, SPTUpsellShowcaseController;

@interface SPTUpsellSettingsPageBuilder : NSObject <SPTDataLoaderDelegate, SPTFeatureSettingsUIProvider>
{
    _Bool _failedToFetchBackgroundImage;
    _Bool _failedToFetchIconImage;
    id <SPTUpsellManager> _upsellManager;
    id <SPTProductState> _productState;
    id <SPTNavigationListProvider> _navigationListProvider;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTUpsellConfigurationsController *_configurationsController;
    SPTUpsellShowcaseController *_showcaseController;
    SPTUpsellConfigurationsJSONParser *_configurationsJsonParser;
    id <SPTUpsellJSONPreviewParser> _v4previewJsonParser;
    SPTDataLoader *_previewDataLoader;
    SPTDataLoader *_qaToolDataLoader;
    SPTDataLoader *_resourceDataLoader;
    SPTUpsellExperiments *_experiments;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTUpsell *_fetchedUpsell;
    SPTUpsellImage *_background;
    SPTUpsellImage *_icon;
    NSMutableArray *_upsellIDs;
    SPTSettingsTableViewCell *_resetShowcaseCell;
    SPTUpsellActionFactory *_actionFactory;
    id <SPTUpsellLogger> _logger;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTUpsellLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTUpsellActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain) SPTSettingsTableViewCell *resetShowcaseCell; // @synthesize resetShowcaseCell=_resetShowcaseCell;
@property(retain, nonatomic) NSMutableArray *upsellIDs; // @synthesize upsellIDs=_upsellIDs;
@property(nonatomic) _Bool failedToFetchIconImage; // @synthesize failedToFetchIconImage=_failedToFetchIconImage;
@property(nonatomic) _Bool failedToFetchBackgroundImage; // @synthesize failedToFetchBackgroundImage=_failedToFetchBackgroundImage;
@property(retain, nonatomic) SPTUpsellImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SPTUpsellImage *background; // @synthesize background=_background;
@property(retain, nonatomic) SPTUpsell *fetchedUpsell; // @synthesize fetchedUpsell=_fetchedUpsell;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) SPTDataLoader *resourceDataLoader; // @synthesize resourceDataLoader=_resourceDataLoader;
@property(retain, nonatomic) SPTDataLoader *qaToolDataLoader; // @synthesize qaToolDataLoader=_qaToolDataLoader;
@property(retain, nonatomic) SPTDataLoader *previewDataLoader; // @synthesize previewDataLoader=_previewDataLoader;
@property(retain, nonatomic) id <SPTUpsellJSONPreviewParser> v4previewJsonParser; // @synthesize v4previewJsonParser=_v4previewJsonParser;
@property(retain, nonatomic) SPTUpsellConfigurationsJSONParser *configurationsJsonParser; // @synthesize configurationsJsonParser=_configurationsJsonParser;
@property(readonly, nonatomic) SPTUpsellShowcaseController *showcaseController; // @synthesize showcaseController=_showcaseController;
@property(readonly, nonatomic) SPTUpsellConfigurationsController *configurationsController; // @synthesize configurationsController=_configurationsController;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTNavigationListProvider> navigationListProvider; // @synthesize navigationListProvider=_navigationListProvider;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
- (void).cxx_destruct;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)checkAndPresentUpsell;
- (long long)resourceTypeForRequest:(id)arg1;
- (id)upsellURLFromID:(id)arg1;
- (void)fetchCurrentUpsell:(id)arg1;
- (void)presentUpsellWithActionURL:(id)arg1;
- (id)itemForShowcase;
- (id)itemForCarMode;
- (id)itemForIAPUpsell;
- (id)groupForDynamicUpsellOperations;
- (id)itemForPresentingV4UpsellWithID;
- (id)itemForPresentingUpsellWithURL;
- (id)itemForPresentingUpsellForReason:(long long)arg1 title:(id)arg2;
- (id)groupForPresentUpsell;
- (id)itemForPresentingUpsellQATool;
- (id)itemForAutoTrial;
- (void)itemizeSettingsPage:(id)arg1;
- (id)initWithUpsellManager:(id)arg1 productState:(id)arg2 navigationListProvider:(id)arg3 configurationsController:(id)arg4 showcaseController:(id)arg5 previewDataLoader:(id)arg6 qaToolDataLoader:(id)arg7 resourceDataLoader:(id)arg8 experiments:(id)arg9 featureSettingsItemFactory:(id)arg10 actionFactory:(id)arg11 logger:(id)arg12 slateManager:(id)arg13 slateBuilderProvider:(id)arg14 alertController:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

