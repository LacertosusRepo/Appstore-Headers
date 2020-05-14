//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTUBILogger, SPTViewLogger;

@interface SPTFreeTierFindLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIImpression5ForHUBComponentModel:(id)arg1;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDataDidFailToLoadWithPageIdentifier:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (void)logDidTapScannablesButton;
- (void)logDidTapCancelButtonWithRequestID:(id)arg1;
- (void)logDidTapSearchButton;
- (void)logMicrophoneImpression;
- (void)logDidTapMicrophoneButton;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 ubiLogger:(id)arg3;

@end

