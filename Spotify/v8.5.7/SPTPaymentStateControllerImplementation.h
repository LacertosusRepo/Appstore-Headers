//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaymentStateController-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSMapTable, NSString, SPTPaymentState;
@protocol SPTProductState;

@interface SPTPaymentStateControllerImplementation : NSObject <SPTPaymentStateController, SPTProductStateObserver>
{
    id <SPTProductState> _productState;
    NSMapTable *_observers;
    SPTPaymentState *_paymentState;
}

@property(retain, nonatomic) SPTPaymentState *paymentState; // @synthesize paymentState=_paymentState;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)performObserverBlock:(CDUnknownBlockType)arg1;
- (void)updatePaymentState;
- (id)initWithProductState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

