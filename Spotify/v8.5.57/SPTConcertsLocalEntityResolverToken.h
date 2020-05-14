//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsResolverToken-Protocol.h"

@class NSString, NSURL;

@interface SPTConcertsLocalEntityResolverToken : NSObject <SPTConcertsResolverToken>
{
    _Bool _completed;
    _Bool _cancelled;
    NSURL *_URI;
}

@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
