//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTSocialListeningViewModel;

@protocol SPTSocialListeningViewModelDelegate <NSObject>
- (void)socialListeningViewModelDidDeleteSession:(id <SPTSocialListeningViewModel>)arg1;
- (void)socialListeningViewModel:(id <SPTSocialListeningViewModel>)arg1 didReceiveError:(NSError *)arg2;
- (void)socialListeningViewModelUpdated:(id <SPTSocialListeningViewModel>)arg1;
@end

