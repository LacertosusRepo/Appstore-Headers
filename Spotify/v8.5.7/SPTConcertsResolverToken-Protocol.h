//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol SPTConcertsResolverToken <NSObject>
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
@property(readonly, nonatomic) NSURL *URI;
- (void)cancel;
@end

