//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAuthTestManager;

@interface SPTAuthViewControllerFactory : NSObject
{
    id <SPTAuthTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTAuthTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (id)createAuthViewControllerWithAccountsRequest:(id)arg1 cookie:(id)arg2 useStaging:(_Bool)arg3;
- (id)initWithTestManager:(id)arg1;

@end

