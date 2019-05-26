//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierSignupFieldValidator.h"

@class NSString, SPTFreeTierSignupEmailBackendValidator;

@interface SPTFreeTierSignupEmaiFieldValidator : NSObject <SPTFreeTierSignupFieldValidator>
{
    SPTFreeTierSignupEmailBackendValidator *_emailBackendValidator;
    CDUnknownBlockType _lastDispatchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType lastDispatchBlock; // @synthesize lastDispatchBlock=_lastDispatchBlock;
@property(retain, nonatomic) SPTFreeTierSignupEmailBackendValidator *emailBackendValidator; // @synthesize emailBackendValidator=_emailBackendValidator;
- (void).cxx_destruct;
- (id)errorForCode:(unsigned long long)arg1;
- (void)validateObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)validateEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scheduleBackendValidationFor:(id)arg1 validationBlock:(CDUnknownBlockType)arg2;
- (id)initWithEmailBackendValidator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
