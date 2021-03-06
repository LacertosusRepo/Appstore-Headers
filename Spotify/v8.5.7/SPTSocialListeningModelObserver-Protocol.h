//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTSocialListeningModel, SPTSocialListeningSessionModelEntity;

@protocol SPTSocialListeningModelObserver <NSObject>
- (void)socialListeningModelDidDeleteSession:(id <SPTSocialListeningModel>)arg1;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didReceiveError:(NSError *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 updatedSession:(id <SPTSocialListeningSessionModelEntity>)arg2;
@end

