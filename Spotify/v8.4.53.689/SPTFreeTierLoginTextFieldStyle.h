//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSString, UIColor, UIFont;

@interface SPTFreeTierLoginTextFieldStyle : NSObject <GLUEStyle>
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_invalidTextColor;
    UIColor *_backgroundColor;
    UIColor *_onFocusBackgroundColor;
    UIColor *_invalidBackgroundColor;
    double _cornerRadius;
    double _textMargin;
    long long _textAlignment;
    long long _keyboardAppearance;
    struct CGSize _rightViewSize;
}

@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGSize rightViewSize; // @synthesize rightViewSize=_rightViewSize;
@property(nonatomic) double textMargin; // @synthesize textMargin=_textMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *invalidBackgroundColor; // @synthesize invalidBackgroundColor=_invalidBackgroundColor;
@property(retain, nonatomic) UIColor *onFocusBackgroundColor; // @synthesize onFocusBackgroundColor=_onFocusBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *invalidTextColor; // @synthesize invalidTextColor=_invalidTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

