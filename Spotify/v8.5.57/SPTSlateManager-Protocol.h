//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTSlateContentUnitDelegate-Protocol.h"

@protocol SPTSlate, SPTSlateWireframe;

@protocol SPTSlateManager <SPTSlateContentUnitDelegate>
@property(readonly, nonatomic) id <SPTSlateWireframe> wireframe;
@property(readonly, nonatomic) id <SPTSlate> presentedSlate;
- (void)dismissSlate:(id <SPTSlate>)arg1 animated:(_Bool)arg2;
- (void)presentSlate:(id <SPTSlate>)arg1 animated:(_Bool)arg2;
@end
