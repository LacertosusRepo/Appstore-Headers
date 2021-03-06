//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginPerformanceLogging;
@protocol SPTLoginStateController, SPTMetaViewController, SPTSessionServicesLoader;

@interface SPTLoginMainViewLoader : NSObject
{
    id <SPTMetaViewController> _metaViewController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    id <SPTLoginStateController> _loginStateController;
    SPTLoginPerformanceLogging *_performanceLogging;
}

@property(retain, nonatomic) SPTLoginPerformanceLogging *performanceLogging; // @synthesize performanceLogging=_performanceLogging;
@property(retain, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (void)presentMainScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadSessionServicesAndPresentMainScreenWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMetaViewController:(id)arg1 sessionServicesLoader:(id)arg2 loginStateController:(id)arg3 performanceLogging:(id)arg4;

@end

