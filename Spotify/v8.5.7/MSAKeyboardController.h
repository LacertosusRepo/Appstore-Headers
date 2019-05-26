//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MySpinKeyboardDelegate-Protocol.h"
#import "UITextInputDelegate-Protocol.h"

@class MSAKeyboardWindow, NSString, NSTimer, UIWindow;
@protocol MySpinKeyboardProtocol, UITextInput, UITextInputDelegate;

@interface MSAKeyboardController : NSObject <UITextInputDelegate, MySpinKeyboardDelegate>
{
    id <UITextInputDelegate> _originalDelegate;
    id <UITextInput> _textWidget;
    id <MySpinKeyboardProtocol> _currentKeyboard;
    NSTimer *_pollFirstResponderTimer;
    _Bool _useKeyboardDidShowNotification;
    _Bool _keyboardIsShown;
    _Bool _isConnectedMode;
    MSAKeyboardWindow *_keyboardWindow;
    UIWindow *_mySpinConnectedWindow;
    UIWindow *_nativeKeyboardWindow;
}

+ (id)getUISearchbarForTextInput:(id)arg1;
+ (id)findFirstResponderTextWidgetInView:(id)arg1;
+ (_Bool)textWidgetHasCustomKeyboardView:(id)arg1;
@property(retain, nonatomic) UIWindow *nativeKeyboardWindow; // @synthesize nativeKeyboardWindow=_nativeKeyboardWindow;
@property __weak UIWindow *mySpinConnectedWindow; // @synthesize mySpinConnectedWindow=_mySpinConnectedWindow;
@property(retain, nonatomic) MSAKeyboardWindow *keyboardWindow; // @synthesize keyboardWindow=_keyboardWindow;
- (void).cxx_destruct;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (_Bool)textWidget:(id)arg1 shouldChangeTextInRange:(id)arg2 replacementText:(id)arg3;
- (void)keyboardDidSubmit;
- (void)changeToNextKeyboardWithInfo:(id)arg1;
- (void)changeToNextKeyboard;
- (void)hideKeyboard;
@property(readonly) _Bool hasAdditionalKeyboardLayouts;
@property(readonly) struct CGSize availableSize;
- (void)updateNativeKeyboardHiddenFlag;
- (void)checkFirstResponder;
@property __weak id <MySpinKeyboardProtocol> currentKeyboard;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideFromTextDidEndEditingNotification;
- (void)hideFromUIKeyboardNotification;
- (void)showKeyboardAfterNotification;
- (void)showFromTextDidBeginEditingNotification;
- (void)handleUIKeyboardDidShowNotification;
- (void)handleUIKeyboardWillShowNotification;
@property(retain) id <UITextInput> textWidget;
- (void)removeObserverForKeyboardNotifications;
- (void)addObserverForKeyboardNotifications;
- (void)mySpinDidDisconnect;
- (void)mySpinDidConnect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
