//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTSearchKeyboardManagerDelegate;

@interface SPTSearchKeyboardManager : NSObject
{
    id <SPTSearchKeyboardManagerDelegate> _delegate;
    long long _keyboardState;
    struct CGRect _keyboardFrame;
}

@property(nonatomic) long long keyboardState; // @synthesize keyboardState=_keyboardState;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) __weak id <SPTSearchKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setUpOverlayWithTheKeyboardNotification:(id)arg1;
- (void)handleKeyboardWillChangeNotification:(id)arg1;
- (void)unregisterNotificationObservers;
- (void)registerNotificationObservers;

@end

