//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLanguageOnboardingUserDefaultsController-Protocol.h"

@class NSString;
@protocol SPTLocalSettings;

@interface SPTLanguageOnboardingUserDefaultsControllerImplemenation : NSObject <SPTLanguageOnboardingUserDefaultsController>
{
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCompletedLanguageOnboarding;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

