//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SPTDataLoaderLoadable : NSObject
{
    MISSING_TYPE *loadable;
}

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)loadWithResultHandler:(id)arg1;
- (id)initWithDataLoaderFactory:(id)arg1 request:(id)arg2 transformAsync:(CDUnknownBlockType)arg3;
- (id)initWithDataLoaderFactory:(id)arg1 request:(id)arg2 transform:(CDUnknownBlockType)arg3;
- (id)initWithDataLoaderFactory:(id)arg1 request:(id)arg2;

@end

