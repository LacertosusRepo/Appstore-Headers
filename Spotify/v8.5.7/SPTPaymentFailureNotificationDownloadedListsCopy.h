//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaymentFailureNotificationCopy-Protocol.h"

@class NSString;

@interface SPTPaymentFailureNotificationDownloadedListsCopy : NSObject <SPTPaymentFailureNotificationCopy>
{
    long long _numberOfOfflineLists;
}

@property(nonatomic) long long numberOfOfflineLists; // @synthesize numberOfOfflineLists=_numberOfOfflineLists;
- (id)message;
- (id)title;
- (id)initWithNumberOfOfflineLists:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

