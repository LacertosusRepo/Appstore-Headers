//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFMailComposeViewController, NSError;

@protocol MFMailComposeViewControllerDelegate <NSObject>

@optional
- (void)mailComposeController:(MFMailComposeViewController *)arg1 didFinishWithResult:(long long)arg2 error:(NSError *)arg3;
@end
