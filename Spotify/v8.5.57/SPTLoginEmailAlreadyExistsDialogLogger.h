//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLoginLogger;

@interface SPTLoginEmailAlreadyExistsDialogLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
}

@property(readonly, copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidTapDismissButton;
- (void)logUserDidTapGoToLoginButton;
- (void)logUserDidSeeEmailAlreadyExistsDialog;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2;

@end

