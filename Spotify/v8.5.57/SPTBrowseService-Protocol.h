//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL, UIViewController;
@protocol SPTBrowseViewControllerProtocol;

@protocol SPTBrowseService <SPTService>
- (_Bool)ownsPageWithURI:(NSURL *)arg1;
@property(nonatomic, readonly) CDUnknownBlockType cardsTransformer;
- (UIViewController<SPTBrowseViewControllerProtocol> *)makeViewController;
@end

