//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTSignupTermsAndPolicyViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    long long _textAlignment;
    UIColor *_textColor;
    UIColor *_linkTextColor;
    long long _linkUnderlineStyle;
    UIFont *_font;
    UIFont *_linkFont;
    double _horizontalMargin;
}

@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(copy, nonatomic) UIFont *linkFont; // @synthesize linkFont=_linkFont;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long linkUnderlineStyle; // @synthesize linkUnderlineStyle=_linkUnderlineStyle;
@property(copy, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

