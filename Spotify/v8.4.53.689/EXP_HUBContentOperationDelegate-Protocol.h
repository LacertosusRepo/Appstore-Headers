//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol EXP_HUBContentOperationDelegate
- (void)contentOperationRequiresRescheduling:(id <EXP_HUBContentOperation>)arg1;
- (void)contentOperation:(id <EXP_HUBContentOperation>)arg1 didFailWithError:(NSError *)arg2;
- (void)contentOperationDidFinish:(id <EXP_HUBContentOperation>)arg1;
@end

