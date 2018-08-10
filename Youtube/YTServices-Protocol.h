//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeUIGlobals.h"
#import "YTPlayerServicesServiceProvider.h"

@class NSArray, YTActivityWaitViewController, YTBackgroundURLSessionNotifications, YTCSIYouTubeActionsController, YTCommandRegistrar, YTFeedbackStateController, YTFlexibleScrollPromoViewController, YTIdentityController, YTInlinePlaybackLayoutCoordinator, YTInterstitialPromoViewController, YTPersonalizedSuggestionsController, YTPlayerViewController, YTPushNotificationController, YTSearchHistory, YTSettings, YTStoreKitPurchaseController, YTTimingResponderEventProcessor, YTTransactionQueueController, YTVideoPreviewController;

@protocol YTServices <YTInnerTubeUIGlobals, YTPlayerServicesServiceProvider>
- (void)prepareForBackgroundFetch;
- (void)didReceiveMemoryWarning;
- (void)setServerEnvironment:(long long)arg1;
- (void)shutdown;
- (void)start;
- (YTPushNotificationController *)pushNotificationController;
- (YTPlayerViewController *)nullablePlayerViewController;
- (YTPlayerViewController *)playerViewController;
- (YTInlinePlaybackLayoutCoordinator *)inlinePlaybackLayoutCoordinator;
- (YTBackgroundURLSessionNotifications *)backgroundURLSessionNotifications;
- (YTTimingResponderEventProcessor *)timingResponderEventProcessor;
- (YTCSIYouTubeActionsController *)CSIActionsController;
- (NSArray *)sharerClasses;
- (YTIdentityController *)identityController;
- (YTTransactionQueueController *)transactionQueueController;
- (YTStoreKitPurchaseController *)storeKitPurchaseController;
- (YTVideoPreviewController *)videoPreviewController;
- (YTFeedbackStateController *)feedbackStateController;
- (YTSettings *)settings;
- (YTSearchHistory *)searchHistory;
- (YTCommandRegistrar *)serviceEndpointController;
- (YTPersonalizedSuggestionsController *)personalizedSuggestionsController;
- (YTInterstitialPromoViewController *)interstitialPromoController;
- (YTActivityWaitViewController *)activityWaitController;
- (YTFlexibleScrollPromoViewController *)flexibleScrollPromoController;
@end

