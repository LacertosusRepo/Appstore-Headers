//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTConcertsEntityRowViewModel <NSObject>
@property(readonly, nonatomic) _Bool canBeTapped;
@property(readonly, copy, nonatomic) NSString *adornmentSubtitleText;
@property(readonly, copy, nonatomic) NSString *adornmentTitleText;
@property(readonly, copy, nonatomic) NSString *subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, nonatomic) unsigned long long kind;
- (void)handleAccessoryTap;
- (void)handleTap;
@end

