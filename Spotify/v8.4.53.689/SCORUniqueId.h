//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCORUniqueId : NSObject
{
    NSString *_uniqueId;
    long long _commonness;
    long long _persistency;
    long long _source;
}

@property long long source; // @synthesize source=_source;
@property long long persistency; // @synthesize persistency=_persistency;
@property long long commonness; // @synthesize commonness=_commonness;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;

@end

