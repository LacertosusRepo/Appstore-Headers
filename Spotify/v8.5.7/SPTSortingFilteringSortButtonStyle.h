//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringFilterBarSortButtonStyle-Protocol.h"

@class GLUEPressedAnimatorStyle, NSString, UIColor, UIFont;

@interface SPTSortingFilteringSortButtonStyle : NSObject <SPTSortingFilteringFilterBarSortButtonStyle>
{
    double _height;
    UIFont *_textfont;
    long long _lineBreakMode;
    double cornerRadius;
    double contentMargin;
    UIColor *normalTextColor;
    UIColor *highlightedTextColor;
    UIColor *disabledTextColor;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_disabledBackgroundColor;
    double borderWidth;
    UIColor *normalBorderColor;
    UIColor *highlightedBorderColor;
    UIColor *disabledBorderColor;
    GLUEPressedAnimatorStyle *_pressedAnimatorStyle;
}

@property(copy, nonatomic) GLUEPressedAnimatorStyle *pressedAnimatorStyle; // @synthesize pressedAnimatorStyle=_pressedAnimatorStyle;
@property(copy, nonatomic) UIColor *disabledBorderColor; // @synthesize disabledBorderColor;
@property(copy, nonatomic) UIColor *highlightedBorderColor; // @synthesize highlightedBorderColor;
@property(copy, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth;
@property(copy, nonatomic) UIColor *disabledBackgroundColor; // @synthesize disabledBackgroundColor=_disabledBackgroundColor;
@property(copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor;
@property(copy, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor;
@property(nonatomic) double contentMargin; // @synthesize contentMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(copy, nonatomic) UIFont *textfont; // @synthesize textfont=_textfont;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)borderColorForState:(unsigned long long)arg1;
- (id)backgroundColorForState:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToButtonStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

