//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoContextPlayerCoordinatorErrorHandler-Protocol.h"

@class NSString;
@protocol SPTAlertController, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket;

@interface SPTVideoContextPlayerCoordinatorErrorHandler : NSObject <SPTVideoContextPlayerCoordinatorErrorHandler>
{
    id <SPTAlertController> _alertController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
}

@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;
- (id)messageForError:(id)arg1 recoverable:(_Bool)arg2;
- (_Bool)canPresentErrorAsBanner;
- (void)presentErrorModalForPlayer:(id)arg1 withTitle:(id)arg2 message:(id)arg3 allowReload:(_Bool)arg4;
- (void)dismissBanner;
- (void)presentErrorBannerForPlayer:(id)arg1 withTitle:(id)arg2 message:(id)arg3;
- (void)handleUnrecoverableError:(id)arg1 atPlayer:(id)arg2;
- (void)handleRecoverableError:(id)arg1 atPlayer:(id)arg2;
- (id)initWithBannerPresentationManager:(id)arg1 alertController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

