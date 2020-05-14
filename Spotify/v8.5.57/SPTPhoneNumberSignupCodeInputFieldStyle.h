//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTPhoneNumberSignupCodeInputFieldStyle : NSObject <GLUEStyle>
{
    UIColor *_textColor;
    UIColor *_errorTextColor;
    UIFont *_font;
    long long _textAlignment;
    double _cornerRadius;
    long long _keyboardType;
    UIColor *_defaultBackgroundColor;
    UIColor *_selectedBackgroundColor;
    UIColor *_errorBackgroundColor;
    UIColor *_tintColor;
}

@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) UIColor *errorBackgroundColor; // @synthesize errorBackgroundColor=_errorBackgroundColor;
@property(copy, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(copy, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *errorTextColor; // @synthesize errorTextColor=_errorTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

