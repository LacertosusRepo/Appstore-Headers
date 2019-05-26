//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginFormViewLoggerProtocol-Protocol.h"

@class NSString, SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTLoginSplitEmailSignupViewLogger : NSObject <SPTLoginFormViewLoggerProtocol>
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
    NSString *_fieldIdentifier;
    SPTLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidSeeView;
- (void)logUserDidInteractWithField:(id)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2;
- (id)adjustIdentifierForFieldWithStringIdentifier:(id)arg1;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2 fieldIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
