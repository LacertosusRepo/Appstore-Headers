//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext;

@interface SPTExplicitContentAuthenticator : NSObject
{
    LAContext *_context;
}

@property(readonly, nonatomic) LAContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)authenticateWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)initWithContext:(id)arg1;

@end
