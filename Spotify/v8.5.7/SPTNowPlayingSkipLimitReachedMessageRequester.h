//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTInAppMessageMessageRequester;

@interface SPTNowPlayingSkipLimitReachedMessageRequester : NSObject
{
    id <SPTInAppMessageMessageRequester> _inAppMessageRequester;
}

@property(readonly, nonatomic) id <SPTInAppMessageMessageRequester> inAppMessageRequester; // @synthesize inAppMessageRequester=_inAppMessageRequester;
- (void).cxx_destruct;
- (void)requestSkipLimitReachedMessage;
- (id)initWithInAppMessageRequester:(id)arg1;

@end
