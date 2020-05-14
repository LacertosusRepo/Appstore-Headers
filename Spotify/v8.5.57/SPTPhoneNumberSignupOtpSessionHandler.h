//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;
@protocol SPTPhoneNumberSignupOtpSessionHandlerDelegate;

@interface SPTPhoneNumberSignupOtpSessionHandler : NSObject
{
    id <SPTPhoneNumberSignupOtpSessionHandlerDelegate> _delegate;
    NSDate *_startTime;
    NSTimer *_timeoutSchedulerTimer;
}

@property(retain, nonatomic) NSTimer *timeoutSchedulerTimer; // @synthesize timeoutSchedulerTimer=_timeoutSchedulerTimer;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <SPTPhoneNumberSignupOtpSessionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCurrentOtpSessionWithTimeToLiveSeconds:(double)arg1;
- (void)resetCurrentSession;
- (_Bool)canResendSMS;
- (void)didSessionTimeout;
- (id)provideTimeoutSchedulerWithTimeToLive:(double)arg1;
- (void)initializeSessionWithTimeToLiveSeconds:(double)arg1;
- (id)initWithTimeToLiveSeconds:(double)arg1;

@end

