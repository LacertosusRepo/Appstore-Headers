//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTStateController <NSObject>
+ (NSString *)saveStateLockPath;
- (void)abortLoading:(id)arg1;
- (void)clearInvalidStoredState;
- (void)clearState;
- (_Bool)hasSavedState;
- (_Bool)isRestoring;
@end

