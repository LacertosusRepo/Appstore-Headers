//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SPTLoginCredentials : NSObject <NSCopying>
{
    struct LoginCredentials _credentials;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEmptyCredentials;
- (id)username;
- (const struct LoginCredentials *)cpp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCredentials:(struct LoginCredentials)arg1;
- (id)initWithSerializableCredentials:(id)arg1;
- (id)initAuthenticating:(id)arg1 withPassword:(id)arg2;
- (id)initAuthenticating:(id)arg1 usingType:(int)arg2 authenticationData:(id)arg3;

@end

