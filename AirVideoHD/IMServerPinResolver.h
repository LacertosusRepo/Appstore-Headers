//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMVeil, NSString;

@interface IMServerPinResolver : NSObject
{
    IMVeil *veil;
    NSString *pin;
    CDUnknownBlockType resolved;
    CDUnknownBlockType error;
    CDUnknownBlockType cancel;
    _Bool cancelled;
}

+ (void)resolvePin:(id)arg1 onResolved:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)resolve;
- (void)resolvePin:(id)arg1 onResolved:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;

@end

