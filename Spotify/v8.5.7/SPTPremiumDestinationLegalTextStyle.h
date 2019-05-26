//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTPremiumDestinationLegalTextStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_labelStyle;
    UIColor *_defaultLegalTextColor;
    UIColor *_defaultLegalURLColor;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UIColor *defaultLegalURLColor; // @synthesize defaultLegalURLColor=_defaultLegalURLColor;
@property(retain, nonatomic) UIColor *defaultLegalTextColor; // @synthesize defaultLegalTextColor=_defaultLegalTextColor;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

