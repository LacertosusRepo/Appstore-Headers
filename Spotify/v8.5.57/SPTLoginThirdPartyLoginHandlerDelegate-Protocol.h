//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol SPTLoginThirdPartyLoginHandlerDelegate <NSObject>
- (UIView *)contextViewForThirdPartyLoginHandler:(id)arg1;
- (void)handlerDidFinishThirdPartyLogin:(id)arg1;
- (void)handlerDidStartThirdPartyLogin:(id)arg1;
@end

