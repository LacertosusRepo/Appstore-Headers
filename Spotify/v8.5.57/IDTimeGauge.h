//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDGauge.h"

@class NSDate;
@protocol IDTimeGaugeDelegate;

@interface IDTimeGauge : IDGauge
{
    id <IDTimeGaugeDelegate> _delegate;
    NSDate *_time;
}

@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) __weak id <IDTimeGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 info:(id)arg2;

@end
