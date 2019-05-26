//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface GCKError : NSError
{
    _Bool _isTransient;
}

+ (id)enumDescriptionForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 osStatus:(int)arg2 isTransient:(_Bool)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 isTransient:(_Bool)arg3;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2 extraInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3;
+ (id)errorWithCode:(long long)arg1 customData:(id)arg2;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2;
+ (id)errorWithCode:(long long)arg1;
@property(nonatomic) _Bool isTransient; // @synthesize isTransient=_isTransient;
- (id)init;
- (id)initWithCode:(long long)arg1;
- (id)initWithCode:(long long)arg1 customData:(id)arg2;
- (id)initWithCode:(long long)arg1 osStatus:(int)arg2 isTransient:(_Bool)arg3;
- (id)initWithCode:(long long)arg1 underlyingError:(id)arg2 isTransient:(_Bool)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 extraInfo:(id)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 additionalUserInfo:(id)arg3;

@end
