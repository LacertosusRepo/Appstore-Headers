//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject
{
    FBSDKGraphRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_batchParameters;
}

@property(copy, nonatomic) NSDictionary *batchParameters; // @synthesize batchParameters=_batchParameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FBSDKGraphRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;

@end

