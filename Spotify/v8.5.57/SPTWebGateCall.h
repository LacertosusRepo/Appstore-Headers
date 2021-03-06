//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTWebGateCall : NSObject
{
    shared_ptr_d5d571b3 _connection;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)setConnection:(shared_ptr_d5d571b3)arg1;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 andFailureCallback:(CDUnknownBlockType)arg2;

@end

