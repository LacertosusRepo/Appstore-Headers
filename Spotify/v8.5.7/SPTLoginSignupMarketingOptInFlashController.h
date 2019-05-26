//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, SPTPopupManager;
@protocol SPTLinkDispatcher, SPTNotificationPreferencesBackendIntegrator;

@interface SPTLoginSignupMarketingOptInFlashController : NSObject
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNotificationPreferencesBackendIntegrator> _notificationsBackendIntegrator;
    NSUserDefaults *_userDefaults;
    SPTPopupManager *_popupManager;
}

@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <SPTNotificationPreferencesBackendIntegrator> notificationsBackendIntegrator; // @synthesize notificationsBackendIntegrator=_notificationsBackendIntegrator;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)explicitlyOptInToMarketingAttempt:(long long)arg1;
- (void)explicitlyOptInToMarketing;
- (void)promptUserForMarketingOptIn;
- (void)checkAndPromptIfNecessaryForMarketingOptIn;
- (id)initWithLinkDispatcher:(id)arg1 notificationsBackendIntegrator:(id)arg2 userDefaults:(id)arg3 popupManager:(id)arg4;

@end
