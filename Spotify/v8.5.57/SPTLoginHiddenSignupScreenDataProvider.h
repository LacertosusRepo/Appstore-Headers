//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginTestManager;

@interface SPTLoginHiddenSignupScreenDataProvider : NSObject
{
    SPTLoginTestManager *_testManager;
}

+ (id)generateRandomPassword;
@property(retain, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (id)providePassword;
- (id)defaultGender;
- (id)supplyDataForHiddenScreens:(id)arg1;
- (id)initWithTestManager:(id)arg1;

@end
