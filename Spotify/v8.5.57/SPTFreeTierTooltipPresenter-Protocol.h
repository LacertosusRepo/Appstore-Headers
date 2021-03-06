//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol SPTFreeTierTooltipPresenter <NSObject>
@property(readonly, nonatomic, getter=isTooltipPresented) _Bool tooltipPresented;
- (void)dismissPresentedTooltip;
- (void)presentTooltipWithText:(NSString *)arg1 fromRect:(struct CGRect)arg2 inView:(UIView *)arg3 permittedArrowDirections:(unsigned long long)arg4 duration:(long long)arg5;
- (void)presentTooltipWithContentView:(UIView *)arg1 fromRect:(struct CGRect)arg2 inView:(UIView *)arg3 permittedArrowDirections:(unsigned long long)arg4 duration:(long long)arg5;
@end

