//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;
@protocol HUBContentOperationDelegate, HUBViewModelBuilder;

@protocol HUBContentOperation
- (void)performForViewModelBuilder:(id <HUBViewModelBuilder>)arg1 previousError:(NSError *)arg2;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate;
@end

