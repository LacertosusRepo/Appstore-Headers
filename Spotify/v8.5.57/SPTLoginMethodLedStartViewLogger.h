//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTLoginMethodLedStartViewLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    SPTLoginErrorLogger *_errorLogger;
    unsigned long long _method;
}

@property(readonly, nonatomic) unsigned long long method; // @synthesize method=_method;
@property(readonly, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidTapLoginButton;
- (void)logUserDidTapSignupButton;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1 method:(unsigned long long)arg2;

@end

