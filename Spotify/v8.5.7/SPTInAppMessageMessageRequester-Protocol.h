//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTInAppMessageMessageRequest;

@protocol SPTInAppMessageMessageRequester <NSObject>
@property(readonly, nonatomic, getter=isPresentingInAppMessageNote) _Bool presentingInAppMessageNote;
@property(readonly, nonatomic, getter=isPresentingInAppMessageBanner) _Bool presentingInAppMessageBanner;
@property(readonly, nonatomic, getter=isPresentingInAppMessageCard) _Bool presentingInAppMessageCard;
- (void)requestMessage:(SPTInAppMessageMessageRequest *)arg1;
@end
