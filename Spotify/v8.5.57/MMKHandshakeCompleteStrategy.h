//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MMKMessageStrategy.h"

@protocol MMKInternalSessionDelegate;

@interface MMKHandshakeCompleteStrategy : MMKMessageStrategy
{
    id <MMKInternalSessionDelegate> _sessionDelegate;
}

@property(nonatomic) __weak id <MMKInternalSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (void)execute:(id)arg1 connection:(id)arg2 sharedSecret:(id)arg3;
- (id)supportedClassString;
- (id)initWithLogger:(id)arg1 sessionDelegate:(id)arg2;

@end

