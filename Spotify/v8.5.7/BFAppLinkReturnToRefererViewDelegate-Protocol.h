//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BFAppLink, BFAppLinkReturnToRefererView;

@protocol BFAppLinkReturnToRefererViewDelegate <NSObject>
- (void)returnToRefererViewDidTapInsideLink:(BFAppLinkReturnToRefererView *)arg1 link:(BFAppLink *)arg2;
- (void)returnToRefererViewDidTapInsideCloseButton:(BFAppLinkReturnToRefererView *)arg1;
@end
