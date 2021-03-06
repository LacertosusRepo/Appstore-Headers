//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTSnackbarConditionalPresenter <NSObject>
- (_Bool)isSnackbarPresentationInProgress;
- (void)presentSnackbarWithIdentifier:(NSString *)arg1 message:(NSString *)arg2 actionButtonIcon:(long long)arg3 maxNumberOfTimes:(unsigned long long)arg4 skipFirstNTimes:(unsigned long long)arg5 actionBlock:(void (^)(void))arg6;
- (void)presentSnackbarWithIdentifier:(NSString *)arg1 message:(NSString *)arg2 actionButtonTitle:(NSString *)arg3 maxNumberOfTimes:(unsigned long long)arg4 skipFirstNTimes:(unsigned long long)arg5 actionBlock:(void (^)(void))arg6;
@end

