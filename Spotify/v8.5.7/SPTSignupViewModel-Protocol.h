//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol SPTSignupViewModelDelegate;

@protocol SPTSignupViewModel <NSObject>
@property(nonatomic) __weak id <SPTSignupViewModelDelegate> delegate;
@property(readonly, nonatomic) NSDictionary *validators;
- (void)validateFieldWithIdentifier:(NSString *)arg1 value:(NSObject *)arg2;
@end

