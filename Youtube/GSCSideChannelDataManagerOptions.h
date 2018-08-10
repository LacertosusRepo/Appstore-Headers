//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GSCSideChannelDataManagerOptions : NSObject <NSCopying>
{
    long long _socialClientApplicationID;
    NSString *_appVersion;
}

@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) long long socialClientApplicationID; // @synthesize socialClientApplicationID=_socialClientApplicationID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppID:(long long)arg1 appVersion:(id)arg2;
- (id)initWithAppID:(long long)arg1;

@end

