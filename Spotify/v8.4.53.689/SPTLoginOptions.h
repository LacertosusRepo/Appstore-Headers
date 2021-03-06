//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTLoginOptions : NSObject
{
    _Bool _autoCreateAccount;
    NSString *_apSrvHostOverride;
    NSString *_apHostOverride;
    NSString *_apResolverHostOverride;
    NSString *_canonicalUsername;
}

+ (id)defaultLoginOptions;
@property(retain, nonatomic) NSString *canonicalUsername; // @synthesize canonicalUsername=_canonicalUsername;
@property(retain, nonatomic) NSString *apResolverHostOverride; // @synthesize apResolverHostOverride=_apResolverHostOverride;
@property(retain, nonatomic) NSString *apHostOverride; // @synthesize apHostOverride=_apHostOverride;
@property(retain, nonatomic) NSString *apSrvHostOverride; // @synthesize apSrvHostOverride=_apSrvHostOverride;
@property(nonatomic) _Bool autoCreateAccount; // @synthesize autoCreateAccount=_autoCreateAccount;
- (void).cxx_destruct;
- (id)init;
- (struct CoreLoginOptions)cppLoginOptions;
- (void)persistGlobalApHostOverride:(id)arg1;

@end

