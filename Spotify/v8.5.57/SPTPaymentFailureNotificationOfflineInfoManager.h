//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTResolver;

@interface SPTPaymentFailureNotificationOfflineInfoManager : NSObject
{
    id <SPTResolver> _resolver;
}

@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (long long)numberOfOfflineListsFromResponse:(id)arg1;
- (void)fetchNumberOfOfflineLists:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(id)arg1;

@end
