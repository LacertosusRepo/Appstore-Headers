//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar;

@interface SPTPaymentFailureNotificationRetryManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)reset;
- (long long)bannersSeen;
- (void)bannerWasShown;
- (_Bool)shouldRetry;
- (id)initWithLocalSettings:(id)arg1 calendar:(id)arg2;

@end

