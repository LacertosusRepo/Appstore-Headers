//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKWebDialogDelegate-Protocol.h"

@class FBSDKGameRequestContent, FBSDKWebDialog, NSString;
@protocol FBSDKGameRequestDialogDelegate;

@interface FBSDKGameRequestDialog : NSObject <FBSDKWebDialogDelegate>
{
    _Bool _dialogIsFrictionless;
    FBSDKWebDialog *_webDialog;
    _Bool _frictionlessRequestsEnabled;
    id <FBSDKGameRequestDialogDelegate> _delegate;
    FBSDKGameRequestContent *_content;
}

+ (id)showWithContent:(id)arg1 delegate:(id)arg2;
+ (void)initialize;
@property(nonatomic) _Bool frictionlessRequestsEnabled; // @synthesize frictionlessRequestsEnabled=_frictionlessRequestsEnabled;
@property(copy, nonatomic) FBSDKGameRequestContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <FBSDKGameRequestDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_filtersNameForFilters:(unsigned long long)arg1;
- (id)_actionTypeNameForActionType:(unsigned long long)arg1;
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;
- (void)_cleanUp;
- (void)webDialogDidCancel:(id)arg1;
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)show;
- (_Bool)canShow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

