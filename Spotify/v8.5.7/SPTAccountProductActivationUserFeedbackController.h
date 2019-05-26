//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountProductActivationObserver-Protocol.h"

@class NSString, SPTAccountProductStateMonitorController;
@protocol SPTAccountProductActivationController;

@interface SPTAccountProductActivationUserFeedbackController : NSObject <SPTAccountProductActivationObserver>
{
    id <SPTAccountProductActivationController> _productActivationController;
    SPTAccountProductStateMonitorController *_productStateMonitorController;
}

@property(retain, nonatomic) SPTAccountProductStateMonitorController *productStateMonitorController; // @synthesize productStateMonitorController=_productStateMonitorController;
@property(retain, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
- (void).cxx_destruct;
- (void)productActivationController:(id)arg1 didFailActivatingProduct:(long long)arg2 error:(id)arg3;
- (void)productActivationController:(id)arg1 didFinishActivatingProduct:(long long)arg2;
- (void)productActivationController:(id)arg1 didStartActivatingProduct:(long long)arg2;
- (_Bool)showSpinnerOnActivationStartForProduct:(long long)arg1;
- (void)stopProvidingUserFeedbackAutomatically;
- (void)startProvidingUserFeedbackAutomatically;
- (void)dealloc;
- (id)initWithProductActivationController:(id)arg1 productStateMonitorController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
