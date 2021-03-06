//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentEvent, NSString, NSURL;
@protocol SPTUBIInteractionEvent;

@protocol SPTHubInteractionLogger <NSObject>
- (void)logInteractionWithURI:(NSURL *)arg1 event:(HUBComponentEvent *)arg2 userIntent:(NSString *)arg3;

@optional
- (NSString *)logInteraction:(id <SPTUBIInteractionEvent>)arg1;
@end

