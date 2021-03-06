//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MySpinFocusControlDelegate.h"
#import "MySpinKeyboardProtocol.h"

@class MySpinAlternativeCharsView, MySpinKeyboardButton, NSMutableArray, NSString, NSTimer, UIView;

@interface MySpinKeyboard : NSObject <MySpinFocusControlDelegate, MySpinKeyboardProtocol>
{
    id <UITextInput> _textWidget;
    unsigned long long _keyboardType;
    unsigned long long _shiftType;
    NSMutableArray *_buttonRows;
    MySpinKeyboardButton *_selectedBtn;
    MySpinKeyboardButton *_focusSelectedBtn;
    long long focusSelectedRow;
    long long focusSelectedCol;
    _Bool showInititalFocus;
    _Bool focusLongPressOk;
    id <MySpinKeyboardDelegate> delegate;
    NSTimer *_initialDeleteTimer;
    NSTimer *_continueDeleteTimer;
    UIView *_keyboardBaseView;
    UIView *_buttonView;
    MySpinAlternativeCharsView *_alternativeCharsView;
    MySpinKeyboardButton *_hideBtn;
}

@property __weak MySpinKeyboardButton *hideBtn; // @synthesize hideBtn=_hideBtn;
@property __weak MySpinAlternativeCharsView *alternativeCharsView; // @synthesize alternativeCharsView=_alternativeCharsView;
@property __weak UIView *buttonView; // @synthesize buttonView=_buttonView;
@property __weak UIView *keyboardBaseView; // @synthesize keyboardBaseView=_keyboardBaseView;
@property(retain, nonatomic) NSTimer *continueDeleteTimer; // @synthesize continueDeleteTimer=_continueDeleteTimer;
@property(retain, nonatomic) NSTimer *initialDeleteTimer; // @synthesize initialDeleteTimer=_initialDeleteTimer;
@property __weak id <MySpinKeyboardDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)focusButtonOfType:(unsigned long long)arg1;
- (unsigned long long)calculateColFromArray:(id)arg1 andPoint:(struct CGPoint)arg2;
- (void)focusHighlightRelative:(unsigned char)arg1;
- (void)handleFocusEvent:(id)arg1;
- (id)replacementCharacterForCharacter:(id)arg1;
- (void)updateConstraints;
- (id)alternativeCharactersForCharacter:(id)arg1;
- (id)keyboardLayoutForType:(unsigned long long)arg1;
- (void)cancelContinueDelete;
- (void)continueDelete;
- (void)invokeContinueDeleteTimer;
- (void)showAlternativeCharacters:(id)arg1 forCharacter:(id)arg2;
- (void)updateKeyboardType;
- (void)updateShiftType;
- (id)stringDeletionRange;
- (_Bool)replaceRange:(id)arg1 withString:(id)arg2;
- (void)touchUpOfCharacterButton:(id)arg1 showAlternative:(_Bool)arg2;
- (void)buttonTouchCancel:(id)arg1;
- (void)buttonUp:(id)arg1 showAlternative:(_Bool)arg2;
- (void)buttonUp:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)generateKeyBoard:(unsigned long long)arg1;
- (void)createAlternativeCharsView;
- (void)hideButtonPressed;
- (void)createHideButton;
- (void)createButtonContainer;
@property __weak id <UITextInput> textWidget;
@property unsigned long long shiftType;
@property unsigned long long keyboardType;
- (void)informationFromPreviousKeyboard:(id)arg1;
- (void)setWritingDirection;
- (void)keyboardDidHide;
- (void)keyboardDidShow;
- (void)textDidChange;
- (void)selectionDidChange;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
@property(readonly) long long writingDirection;
@property(readonly) NSString *keyboardID;
@property(readonly) UIView *keyboardView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

