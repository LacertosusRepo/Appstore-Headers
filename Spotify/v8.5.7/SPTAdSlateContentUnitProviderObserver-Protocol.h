//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SPTAdSlateContentUnitProvider, SPTSlate;

@protocol SPTAdSlateContentUnitProviderObserver <NSObject>
- (void)provider:(id <SPTAdSlateContentUnitProvider>)arg1 slate:(id <SPTSlate>)arg2;

@optional
- (void)slateWithProvider:(id <SPTAdSlateContentUnitProvider>)arg1 contentView:(UIView *)arg2;
@end
