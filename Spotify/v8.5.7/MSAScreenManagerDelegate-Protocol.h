//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSACompressedFrame, UIViewController;

@protocol MSAScreenManagerDelegate <NSObject>
- (void)handleNewCompressedFrame:(MSACompressedFrame *)arg1;
- (_Bool)shouldEnableAutolockInDisconnectedMode;
- (UIViewController *)viewControllerForConnectedModeOnRemoteScreen;
- (UIViewController *)viewControllerForDisconnectedMode;
@end

