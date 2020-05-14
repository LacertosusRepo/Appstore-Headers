//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SPTPartnerDateProvider;

@interface SPTPartnerTimeTracker : NSObject
{
    NSDate *_startDate;
    SPTPartnerDateProvider *_dateProvider;
    NSDate *_backgroundDate;
    double _secondsInBackground;
}

@property(nonatomic) double secondsInBackground; // @synthesize secondsInBackground=_secondsInBackground;
@property(retain, nonatomic) NSDate *backgroundDate; // @synthesize backgroundDate=_backgroundDate;
@property(retain, nonatomic) SPTPartnerDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (double)secondsSinceStart;
- (void)appDidEnterForeground;
- (void)appDidEnterBackground;
- (void)dealloc;
- (id)init;

@end
