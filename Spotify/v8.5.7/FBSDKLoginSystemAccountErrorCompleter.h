//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKLoginCompleting-Protocol.h"

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountErrorCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;
}

- (void).cxx_destruct;
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithError:(id)arg1 permissions:(id)arg2;
- (id)init;

@end
