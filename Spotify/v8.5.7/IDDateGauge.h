//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDGauge.h"

@class NSDate;
@protocol IDDateGaugeDelegate;

@interface IDDateGauge : IDGauge
{
    id <IDDateGaugeDelegate> _delegate;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <IDDateGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 info:(id)arg2;

@end

