//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKWebDialogDelegate-Protocol.h"

@class FBSDKAppGroupContent, FBSDKWebDialog, NSString;
@protocol FBSDKAppGroupAddDialogDelegate;

@interface FBSDKAppGroupAddDialog : NSObject <FBSDKWebDialogDelegate>
{
    FBSDKWebDialog *_webDialog;
    id <FBSDKAppGroupAddDialogDelegate> _delegate;
    FBSDKAppGroupContent *_content;
}

+ (id)showWithContent:(id)arg1 delegate:(id)arg2;
@property(copy, nonatomic) FBSDKAppGroupContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <FBSDKAppGroupAddDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;
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

