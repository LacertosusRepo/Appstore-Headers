//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKWebDialogView, NSDictionary, NSError;

@protocol FBSDKWebDialogViewDelegate <NSObject>
- (void)webDialogViewDidFinishLoad:(FBSDKWebDialogView *)arg1;
- (void)webDialogViewDidCancel:(FBSDKWebDialogView *)arg1;
- (void)webDialogView:(FBSDKWebDialogView *)arg1 didFailWithError:(NSError *)arg2;
- (void)webDialogView:(FBSDKWebDialogView *)arg1 didCompleteWithResults:(NSDictionary *)arg2;
@end

