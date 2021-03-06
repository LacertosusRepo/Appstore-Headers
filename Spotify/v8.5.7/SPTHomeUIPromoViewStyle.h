//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTHomeUIPromoViewStyle : NSObject <GLUEStyle>
{
    GLUEImageStyle *_imageStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    GLUELabelStyle *_metadataLabelStyle;
    double _imageToLabelsMargin;
    double _subtitleToTitleMargin;
    double _metadataToSubtitleMargin;
    struct UIEdgeInsets _contentInsets;
}

+ (id)defaultStyleWithTheme:(id)arg1;
@property(nonatomic) double metadataToSubtitleMargin; // @synthesize metadataToSubtitleMargin=_metadataToSubtitleMargin;
@property(nonatomic) double subtitleToTitleMargin; // @synthesize subtitleToTitleMargin=_subtitleToTitleMargin;
@property(nonatomic) double imageToLabelsMargin; // @synthesize imageToLabelsMargin=_imageToLabelsMargin;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(copy, nonatomic) GLUELabelStyle *metadataLabelStyle; // @synthesize metadataLabelStyle=_metadataLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

