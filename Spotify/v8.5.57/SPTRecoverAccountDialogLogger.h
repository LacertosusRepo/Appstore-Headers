//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTRecoverAccountDialogLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionWithIntent:(id)arg1;
- (void)logSetPasswordButtonInteraction;
- (void)logCloseButtonInteraction;
- (void)logBannerImpression;
- (id)initWithLogCenter:(id)arg1;

@end

