//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTFreeTierAllSongsHeaderEntityViewModelDelegate;

@protocol SPTFreeTierAllSongsHeaderEntityViewModel <NSObject>
@property(readonly, copy, nonatomic) NSString *actionTitle;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long type;
@property(nonatomic) __weak id <SPTFreeTierAllSongsHeaderEntityViewModelDelegate> delegate;
@end
