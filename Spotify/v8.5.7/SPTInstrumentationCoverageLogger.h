//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationCoverageLogger : NSObject
{
    id <SPTInstrumentationTransport> _transport;
}

@property(readonly, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)notePageViewCoverageForPageViewIdentifier:(id)arg1 pageName:(id)arg2;
- (id)initWithTransport:(id)arg1;

@end
