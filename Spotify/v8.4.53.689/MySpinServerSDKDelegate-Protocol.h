//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol MySpinServerSDKDelegate <NSObject>
- (UIViewController *)viewControllerForConnectedModeOnRemoteScreen:(struct CGSize)arg1;
- (UIViewController *)viewControllerForDisconnectedMode;

@optional
- (_Bool)shouldEnableAutoLock;
- (void)phoneCallStateDidChange:(long long)arg1;
- (void)connectionStateDidChange:(_Bool)arg1;
@end

