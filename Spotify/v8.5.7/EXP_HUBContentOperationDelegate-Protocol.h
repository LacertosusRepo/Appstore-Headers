//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;
@protocol EXP_HUBContentOperation;

@protocol EXP_HUBContentOperationDelegate
- (void)contentOperationRequiresRescheduling:(id <EXP_HUBContentOperation>)arg1;
- (void)contentOperation:(id <EXP_HUBContentOperation>)arg1 didFailWithError:(NSError *)arg2;
- (void)contentOperationDidFinish:(id <EXP_HUBContentOperation>)arg1;
@end
