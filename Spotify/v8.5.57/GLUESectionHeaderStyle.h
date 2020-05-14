//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface GLUESectionHeaderStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    double _height;
    double _titleBaselineFromContentTopEdge;
    double _contentBaselineToContentBottomEdge;
    double _subtitleBaselineFromTitleBaseline;
    struct GLUESideMargins _margins;
}

@property(nonatomic) double subtitleBaselineFromTitleBaseline; // @synthesize subtitleBaselineFromTitleBaseline=_subtitleBaselineFromTitleBaseline;
@property(nonatomic) double contentBaselineToContentBottomEdge; // @synthesize contentBaselineToContentBottomEdge=_contentBaselineToContentBottomEdge;
@property(nonatomic) double titleBaselineFromContentTopEdge; // @synthesize titleBaselineFromContentTopEdge=_titleBaselineFromContentTopEdge;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) struct GLUESideMargins margins; // @synthesize margins=_margins;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSectionHeaderStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

