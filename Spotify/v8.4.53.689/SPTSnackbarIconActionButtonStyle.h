//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSnackbarIconActionButtonStyle.h"

@class NSString, UIColor;

@interface SPTSnackbarIconActionButtonStyle : NSObject <SPTSnackbarIconActionButtonStyle>
{
    UIColor *iconNormalColor;
    UIColor *iconHighlightedColor;
    UIColor *iconDisabledColor;
    UIColor *iconNormalBackgroundColor;
    UIColor *iconHighlightedBackgroundColor;
    UIColor *iconDisabledBackgroundColor;
    struct CGSize defaultIconSize;
}

@property(nonatomic) struct CGSize defaultIconSize; // @synthesize defaultIconSize;
@property(copy, nonatomic) UIColor *iconDisabledBackgroundColor; // @synthesize iconDisabledBackgroundColor;
@property(copy, nonatomic) UIColor *iconHighlightedBackgroundColor; // @synthesize iconHighlightedBackgroundColor;
@property(copy, nonatomic) UIColor *iconNormalBackgroundColor; // @synthesize iconNormalBackgroundColor;
@property(copy, nonatomic) UIColor *iconDisabledColor; // @synthesize iconDisabledColor;
@property(copy, nonatomic) UIColor *iconHighlightedColor; // @synthesize iconHighlightedColor;
@property(copy, nonatomic) UIColor *iconNormalColor; // @synthesize iconNormalColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
