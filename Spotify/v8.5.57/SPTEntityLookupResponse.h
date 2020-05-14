//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SPTEntityCancelationToken;

@interface SPTEntityLookupResponse : NSObject
{
    _Bool _itemFromCache;
    unsigned long long _result;
    id _object;
    NSError *_error;
    SPTEntityCancelationToken *_token;
}

+ (id)responseWithResult:(unsigned long long)arg1 object:(id)arg2 error:(id)arg3 token:(id)arg4 itemFromCache:(_Bool)arg5;
@property(readonly, nonatomic) _Bool itemFromCache; // @synthesize itemFromCache=_itemFromCache;
@property(readonly, nonatomic) SPTEntityCancelationToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)initWithResult:(unsigned long long)arg1 object:(id)arg2 error:(id)arg3 token:(id)arg4 itemFromCache:(_Bool)arg5;

@end
