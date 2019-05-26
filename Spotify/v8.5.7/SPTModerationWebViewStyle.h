//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, SPTModerationReportErrorViewStyle, UIColor;

@interface SPTModerationWebViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    UIColor *_navigationItemColor;
    SPTModerationReportErrorViewStyle *_errorViewStyle;
    struct CGSize _navigationItemIconSize;
}

@property(retain, nonatomic) SPTModerationReportErrorViewStyle *errorViewStyle; // @synthesize errorViewStyle=_errorViewStyle;
@property(nonatomic) struct CGSize navigationItemIconSize; // @synthesize navigationItemIconSize=_navigationItemIconSize;
@property(retain, nonatomic) UIColor *navigationItemColor; // @synthesize navigationItemColor=_navigationItemColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
