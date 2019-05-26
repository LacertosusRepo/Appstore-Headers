//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginAutosendLinkFirstVersionViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    GLUELabelStyle *_boldMessageLabelStyle;
    GLUEButtonStyle *_actionButtonStyle;
    UIColor *_backgroundColor;
    double _titleTopMargin;
    double _messageTopMargin;
    double _actionButtonTopMargin;
    double _actionButtonBottomMargin;
    double _contentHorizontalMargin;
}

@property(nonatomic) double contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(nonatomic) double actionButtonBottomMargin; // @synthesize actionButtonBottomMargin=_actionButtonBottomMargin;
@property(nonatomic) double actionButtonTopMargin; // @synthesize actionButtonTopMargin=_actionButtonTopMargin;
@property(nonatomic) double messageTopMargin; // @synthesize messageTopMargin=_messageTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *boldMessageLabelStyle; // @synthesize boldMessageLabelStyle=_boldMessageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

