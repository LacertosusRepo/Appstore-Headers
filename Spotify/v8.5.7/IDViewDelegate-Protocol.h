//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDView;

@protocol IDViewDelegate <NSObject>

@optional
- (void)viewDidDisappear:(IDView *)arg1;
- (void)viewDidAppear:(IDView *)arg1;
- (void)viewDidLoseFocus:(IDView *)arg1;
- (void)viewDidBecomeFocused:(IDView *)arg1;
@end

