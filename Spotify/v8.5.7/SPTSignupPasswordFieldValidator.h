//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupFieldValidator-Protocol.h"

@class NSArray, NSString;

@interface SPTSignupPasswordFieldValidator : NSObject <SPTSignupFieldValidator>
{
    NSArray *_passwordBlacklist;
}

@property(retain, nonatomic) NSArray *passwordBlacklist; // @synthesize passwordBlacklist=_passwordBlacklist;
- (void).cxx_destruct;
- (id)localValidationErrorWithObject:(id)arg1;
- (id)errorForCode:(unsigned long long)arg1;
- (void)validateObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)createPasswordBlacklistArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

