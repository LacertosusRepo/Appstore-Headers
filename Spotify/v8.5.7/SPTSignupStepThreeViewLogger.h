//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginFormViewLoggerProtocol-Protocol.h"

@class NSString, SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTSignupStepThreeViewLogger : NSObject <SPTLoginFormViewLoggerProtocol>
{
    id <SPTLoginLogger> _logger;
    SPTLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)adjustIdentifierForFieldWithStringIdentifier:(id)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidInteractWithField:(id)arg1;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

