//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierLoginFormViewLoggerProtocol.h"

@class NSString, SPTFreeTierLoginErrorLogger;

@interface SPTFreeTierLoginViewLogger : NSObject <SPTFreeTierLoginFormViewLoggerProtocol>
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    SPTFreeTierLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTFreeTierLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)logUserDidTapDialogButton:(unsigned long long)arg1;
- (void)logUserDidSeePopupDialog;
- (long long)adjustIdentifierForFieldWithStringIdentifier:(id)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2;
- (void)logUserDidTapForgotPasswordButton;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidInteractWithField:(id)arg1;
- (void)logUserDidSeeView;
- (id)initWithAdjustTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

