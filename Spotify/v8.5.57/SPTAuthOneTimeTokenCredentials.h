//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTAuthOneTimeTokenCredentials : NSObject
{
    struct optional<spotify::connectivity::auth::credentials::OneTimeToken> _credentials;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct OneTimeToken *)cpp;
- (id)initWithToken:(id)arg1;

@end
