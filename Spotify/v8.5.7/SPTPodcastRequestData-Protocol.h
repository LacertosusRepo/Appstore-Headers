//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@protocol SPTPodcastRequestData <NSObject>
@property(readonly, copy, nonatomic) NSString *requestAction;
@property(readonly, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
@property(readonly, nonatomic) NSString *requestStringTemplate;

@optional
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly, nonatomic) NSData *requestBody;
@end

