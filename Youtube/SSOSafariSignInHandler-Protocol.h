//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SSOSafariSignInHandler <NSObject>
@property(nonatomic) __weak id <SSOSafariSignInHandlerDelegate> delegate;
- (_Bool)dismissSafariViewControllerWithCompletion:(void (^)(void))arg1;
- (void)dismissAuthSession;
- (void)signInWithURL:(NSURL *)arg1 useAuthSession:(_Bool)arg2 presentBlock:(void (^)(UIViewController *))arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
@end
