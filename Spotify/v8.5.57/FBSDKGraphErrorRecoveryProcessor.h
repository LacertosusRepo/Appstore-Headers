//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKErrorRecoveryAttempter, NSError;
@protocol FBSDKGraphErrorRecoveryProcessorDelegate;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject
{
    FBSDKErrorRecoveryAttempter *_recoveryAttempter;
    NSError *_error;
    id <FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;
}

@property(retain, nonatomic) id <FBSDKGraphErrorRecoveryProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPresentErrorWithRecovery:(_Bool)arg1 contextInfo:(void *)arg2;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (void)displayAlertWithRecoverySuggestion:(id)arg1 recoveryOptionsTitles:(id)arg2;
- (_Bool)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3;

@end

