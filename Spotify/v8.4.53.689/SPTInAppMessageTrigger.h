//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTInAppMessageTrigger : NSObject
{
    _Bool _cache;
    long long _type;
    long long _format;
    NSString *_pattern;
}

+ (id)typeStringFromType:(long long)arg1;
+ (id)formatStringFromFormat:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
@property(readonly, nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 pattern:(id)arg2 format:(long long)arg3 cache:(_Bool)arg4;

@end

