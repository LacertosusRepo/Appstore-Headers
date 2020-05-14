//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHTTPCookie, SPTAuthAccountsRequest;

@interface SPTAuthViewControllerViewModel : NSObject
{
    _Bool _usingStaging;
    SPTAuthAccountsRequest *_request;
    NSHTTPCookie *_cookie;
}

@property(retain, nonatomic) NSHTTPCookie *cookie; // @synthesize cookie=_cookie;
@property(nonatomic) _Bool usingStaging; // @synthesize usingStaging=_usingStaging;
@property(retain, nonatomic) SPTAuthAccountsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)decidePolicyForNavigationAction:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)webViewConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAccountsRequest:(id)arg1 cookie:(id)arg2 useStaging:(_Bool)arg3;

@end
