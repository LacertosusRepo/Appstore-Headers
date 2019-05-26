//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL;

@protocol SPTRecentlyPlayedEntityItem <NSObject>
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) NSURL *offlineURL;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSURL *trackURL;
@property(readonly, nonatomic) long long icon;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)action;

@optional
@property(readonly, nonatomic) NSDate *publishDate;
@property(readonly, nonatomic) _Bool isNew;
@end

