//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, SPTFreeTierCollectionCollapsableHeaderButtonStyle;

@interface SPTFreeTierCollectionCollapsableHeaderStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_subtitleStyle;
    SPTFreeTierCollectionCollapsableHeaderButtonStyle *_collapseButtonStyle;
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
@property(copy, nonatomic) SPTFreeTierCollectionCollapsableHeaderButtonStyle *collapseButtonStyle; // @synthesize collapseButtonStyle=_collapseButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

