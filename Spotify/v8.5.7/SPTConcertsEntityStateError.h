//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTConcertsEntityState.h"

@class NSError;

@interface SPTConcertsEntityStateError : SPTConcertsEntityState
{
    NSError *_error;
}

+ (id)stateWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;

@end
