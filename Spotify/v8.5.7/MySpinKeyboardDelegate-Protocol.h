//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UITextRange;
@protocol UITextInput;

@protocol MySpinKeyboardDelegate <NSObject>
@property(readonly) _Bool hasAdditionalKeyboardLayouts;
@property(readonly) struct CGSize availableSize;
- (_Bool)textWidget:(id <UITextInput>)arg1 shouldChangeTextInRange:(UITextRange *)arg2 replacementText:(NSString *)arg3;
- (void)keyboardDidSubmit;
- (void)changeToNextKeyboard;
- (void)changeToNextKeyboardWithInfo:(NSDictionary *)arg1;
- (void)hideKeyboard;
@end

