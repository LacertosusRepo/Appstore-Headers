//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTObserverManager, UIView, UIViewController;
@protocol SPTGaiaConnectManager, SPTSocialListeningCardViewController, SPTSocialListeningModel, SPTSocialListeningTestManager, SPTSocialListeningUserInterfaceFactory;

@interface SPTGaiaSocialListeningIntegrationManager : NSObject <SPTGaiaConnectManagerObserver, SPTSocialListeningModelObserver>
{
    id <SPTSocialListeningTestManager> _testManager;
    id <SPTSocialListeningUserInterfaceFactory> _userInterfaceFactory;
    id <SPTSocialListeningModel> _model;
    id <SPTGaiaConnectManager> _connectManager;
    SPTObserverManager *_observers;
    NSNotificationCenter *_notificationCenter;
    UIViewController<SPTSocialListeningCardViewController> *_controller;
}

@property(retain, nonatomic) UIViewController<SPTSocialListeningCardViewController> *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTSocialListeningModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTSocialListeningUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)socialListeningModelDidDeleteSession:(id)arg1;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2;
- (void)attachDeviceAutomaticallyIfNeeded:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyUpdate;
@property(readonly, nonatomic) _Bool shouldShowParticipantsInNowPlayingView;
@property(readonly, nonatomic) NSString *numberOfParticipantsString;
@property(readonly, nonatomic) struct UIEdgeInsets contentViewMargins;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIViewController<SPTSocialListeningCardViewController> *viewController;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)devicePickerWillAppear;
- (void)dealloc;
- (id)initWithTestManager:(id)arg1 userInterfaceFactory:(id)arg2 model:(id)arg3 connectManager:(id)arg4 notificationCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

