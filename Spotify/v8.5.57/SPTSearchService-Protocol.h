//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class UIViewController;
@protocol SPTSearch2ViewControllerProtocol;

@protocol SPTSearchService <SPTService>
- (UIViewController<SPTSearch2ViewControllerProtocol> *)makeViewController;
@end

