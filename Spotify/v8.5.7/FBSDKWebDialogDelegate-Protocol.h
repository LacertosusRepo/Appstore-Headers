//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKWebDialog, NSDictionary, NSError;

@protocol FBSDKWebDialogDelegate <NSObject>
- (void)webDialogDidCancel:(FBSDKWebDialog *)arg1;
- (void)webDialog:(FBSDKWebDialog *)arg1 didFailWithError:(NSError *)arg2;
- (void)webDialog:(FBSDKWebDialog *)arg1 didCompleteWithResults:(NSDictionary *)arg2;
@end

