//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSocialListeningDataLoader, SPTSocialListeningSession;

@protocol SPTSocialListeningDataLoaderDelegate <NSObject>
- (void)socialListeningDataLoaderDidDeleteSession:(SPTSocialListeningDataLoader *)arg1;
- (void)socialListeningDataLoaderDidEndSession:(SPTSocialListeningDataLoader *)arg1;
- (void)socialListeningDataLoader:(SPTSocialListeningDataLoader *)arg1 didFailWithError:(NSError *)arg2;
- (void)socialListeningDataLoader:(SPTSocialListeningDataLoader *)arg1 didObtainSession:(SPTSocialListeningSession *)arg2;
@end

