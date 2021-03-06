//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableArray, NSString, UIColor, UIImage, UILabel, UIView;

@interface MySpinKeyboardButton : UIButton
{
    _Bool _shouldFilterTouchEvents;
    UIView *_highlightView;
    UILabel *_highlightLabel;
    UIColor *_translucentFrameColor;
    UIColor *_popUpColor;
    _Bool _shouldFindAltCharacters;
    unsigned long long _keyboardButtonType;
    NSString *_character;
    NSString *_capitalCharacter;
    UIImage *_icon;
    double _fontScale;
    NSMutableArray *_altCharacters;
    double _widthScaleFactor;
}

@property double widthScaleFactor; // @synthesize widthScaleFactor=_widthScaleFactor;
@property(nonatomic) _Bool shouldFindAltCharacters; // @synthesize shouldFindAltCharacters=_shouldFindAltCharacters;
@property(readonly, retain, nonatomic) NSMutableArray *altCharacters; // @synthesize altCharacters=_altCharacters;
@property(nonatomic) double fontScale; // @synthesize fontScale=_fontScale;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *capitalCharacter; // @synthesize capitalCharacter=_capitalCharacter;
@property(retain, nonatomic) NSString *character; // @synthesize character=_character;
@property(nonatomic) unsigned long long keyboardButtonType; // @synthesize keyboardButtonType=_keyboardButtonType;
- (void).cxx_destruct;
- (void)updateFocusControlHighlighted:(_Bool)arg1;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)cancelTouchWithTouchUpInside;
- (void)removeHighlightPopover;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateViewForShiftType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 character:(id)arg2 capitalCharacter:(id)arg3;
- (id)init;

@end

