//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesPresenter-Protocol.h"

@class NSString, SPTScannablesAuthorizationRequester, SPTScannablesLogger;
@protocol SPTModalPresentationController, SPTScannablesUserInterfaceFactory;

@interface SPTScannablesModalPresenter : NSObject <SPTScannablesPresenter>
{
    id <SPTScannablesUserInterfaceFactory> _userInterfaceFactory;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    SPTScannablesLogger *_logger;
}

@property(readonly, nonatomic) SPTScannablesLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTScannablesUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
- (void).cxx_destruct;
- (void)presentCameraViewWithSourceURL:(id)arg1 sourceIdentifier:(id)arg2;
- (id)initWithUserInterfaceFactory:(id)arg1 modalPresentationController:(id)arg2 authorizationRequester:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

