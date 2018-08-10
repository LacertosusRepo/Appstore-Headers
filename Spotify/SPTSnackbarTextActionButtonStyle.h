//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSnackbarTextActionButtonStyle.h"

@class NSString, UIColor, UIFont;

@interface SPTSnackbarTextActionButtonStyle : NSObject <SPTSnackbarTextActionButtonStyle>
{
    UIColor *normalTextColor;
    UIColor *highlightedTextColor;
    UIColor *disabledTextColor;
    UIColor *backgroundColor;
    UIFont *textFont;
}

@property(copy, nonatomic) UIFont *textFont; // @synthesize textFont;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor;
@property(copy, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
