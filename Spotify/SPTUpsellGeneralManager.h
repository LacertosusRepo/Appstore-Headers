//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUpsellManager.h"
#import "SPTUpsellPopupManagerImplementationObserver.h"
#import "SPTUpsellPresentShowcaseProtocol.h"

@class NSMapTable, NSString, SPTUpsellConfigurationsController, SPTUpsellExperiments, SPTUpsellPopupManagerImplementation;

@interface SPTUpsellGeneralManager : NSObject <SPTUpsellPopupManagerImplementationObserver, SPTUpsellManager, SPTUpsellPresentShowcaseProtocol>
{
    double _showcasePresentationStartTime;
    SPTUpsellPopupManagerImplementation *_popupManager;
    CDUnknownBlockType _viewDidAppearCompletionBlock;
    NSMapTable *_observers;
    SPTUpsellConfigurationsController *_configurationsController;
    SPTUpsellExperiments *_experiments;
    id <SPTUpsellLogger> _logger;
}

@property(readonly, nonatomic) id <SPTUpsellLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) SPTUpsellConfigurationsController *configurationsController; // @synthesize configurationsController=_configurationsController;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearCompletionBlock; // @synthesize viewDidAppearCompletionBlock=_viewDidAppearCompletionBlock;
@property(readonly, nonatomic) SPTUpsellPopupManagerImplementation *popupManager; // @synthesize popupManager=_popupManager;
@property(nonatomic) double showcasePresentationStartTime; // @synthesize showcasePresentationStartTime=_showcasePresentationStartTime;
- (void).cxx_destruct;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)upsellViewDidAppear:(_Bool)arg1;
- (void)upsellPopupManagerImplementation:(id)arg1 didFinishPresentingUpsell:(id)arg2;
@property(readonly, nonatomic, getter=isPopupPresentingOrPresented) _Bool popupPresentingOrPresented;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (_Bool)presentMoreUpsell:(id)arg1;
- (_Bool)presentUpsell:(id)arg1;
- (void)triggerDynamicUpsellForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerAutoTrialForReason:(long long)arg1;
- (void)triggerUpsellForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerUpsellForReason:(long long)arg1;
- (id)initWithExperiments:(id)arg1 configurationsController:(id)arg2 popupManager:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
