//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface GSCRpcRequestOptions : NSObject <NSCopying>
{
    unsigned long long _retryPolicy;
    CDUnknownBlockType _retryBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(nonatomic) unsigned long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

