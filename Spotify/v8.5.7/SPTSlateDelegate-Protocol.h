//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTSlate;

@protocol SPTSlateDelegate <NSObject>

@optional
- (void)slateAccessoryButtonDidTap:(id <SPTSlate>)arg1;
- (void)slateDidDismiss:(id <SPTSlate>)arg1;
- (void)slateWillDismiss:(id <SPTSlate>)arg1;
- (void)slateSwiped:(id <SPTSlate>)arg1;
@end

