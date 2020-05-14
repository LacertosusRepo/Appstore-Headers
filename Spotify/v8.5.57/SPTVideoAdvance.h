//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoAdvance : SPTVideoPlayerMessage
{
    unsigned long long _reason;
    NSString *_unplayableReason;
}

+ (id)unplayableWithReason:(id)arg1;
+ (id)finished;
@property(readonly, nonatomic) NSString *unplayableReason; // @synthesize unplayableReason=_unplayableReason;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)description;
- (id)serializedDictionary;
- (id)initWithReason:(unsigned long long)arg1 unplayableReason:(id)arg2;

@end

