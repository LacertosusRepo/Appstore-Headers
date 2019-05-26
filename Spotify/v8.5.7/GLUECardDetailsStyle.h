//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface GLUECardDetailsStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    double _titleLabelTopMargin;
    double _subtitleLabelTopMargin;
    double _subtitleLabelBottomMargin;
    UIColor *_backgroundColor;
    long long _doubleLinePriority;
}

@property(nonatomic) long long doubleLinePriority; // @synthesize doubleLinePriority=_doubleLinePriority;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double subtitleLabelBottomMargin; // @synthesize subtitleLabelBottomMargin=_subtitleLabelBottomMargin;
@property(nonatomic) double subtitleLabelTopMargin; // @synthesize subtitleLabelTopMargin=_subtitleLabelTopMargin;
@property(nonatomic) double titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCardDetailsStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
