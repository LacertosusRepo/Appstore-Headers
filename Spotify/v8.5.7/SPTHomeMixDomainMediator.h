//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeMixDomainModel, SPTObserverManager;
@protocol SPTHomeMixEffectHandler;

@interface SPTHomeMixDomainMediator : NSObject
{
    SPTHomeMixDomainModel *_domainModel;
    id <SPTHomeMixEffectHandler> _effectHandler;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTHomeMixEffectHandler> effectHandler; // @synthesize effectHandler=_effectHandler;
@property(copy, nonatomic) SPTHomeMixDomainModel *domainModel; // @synthesize domainModel=_domainModel;
- (void).cxx_destruct;
- (void)addModelObserver:(id)arg1;
- (void)eventOccurred:(id)arg1;
- (id)initWithDomainModel:(id)arg1 effectHandler:(id)arg2;

@end

