//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTQuickPlayLogger <NSObject>
- (void)logQuickPlayTooltipImpression;
- (void)logQuickPlayButtonImpression;
- (void)logQuickPlayButtonInteractionContextUri:(NSURL *)arg1 contextIndex:(long long)arg2 contextType:(NSString *)arg3;
@end
