//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HUBViewModel, SPTSearchPlatformContext;

@protocol SPTSearchPlatformContextDelegate <NSObject>
- (void)context:(id <SPTSearchPlatformContext>)arg1 didUpdateViewModelFrom:(id <HUBViewModel>)arg2;

@optional
- (void)context:(id <SPTSearchPlatformContext>)arg1 didUpdateStateFrom:(unsigned long long)arg2;
@end

