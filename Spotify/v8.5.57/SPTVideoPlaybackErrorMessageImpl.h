//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlaybackErrorMessage-Protocol.h"

@class NSError, NSString;
@protocol BMPlaybackIdentity;

@interface SPTVideoPlaybackErrorMessageImpl : NSObject <BMPlaybackErrorMessage>
{
    id <BMPlaybackIdentity> _identity;
    NSString *_featureIdentifier;
    NSError *_error;
    NSString *_errorComment;
    NSError *_underlyingError;
    NSString *_underlyingErrorComment;
}

@property(copy, nonatomic) NSString *underlyingErrorComment; // @synthesize underlyingErrorComment=_underlyingErrorComment;
@property(retain, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(copy, nonatomic) NSString *errorComment; // @synthesize errorComment=_errorComment;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 featureIdentifier:(id)arg2 error:(id)arg3 errorComment:(id)arg4 underlyingError:(id)arg5 underlyingErrorComment:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

