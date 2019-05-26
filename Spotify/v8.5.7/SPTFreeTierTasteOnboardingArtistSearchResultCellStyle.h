//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString, UIColor, UIImage;

@interface SPTFreeTierTasteOnboardingArtistSearchResultCellStyle : NSObject <GLUEStyle>
{
    GLUEImageStyle *_imageViewStyle;
    GLUELabelStyle *_nameLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    UIImage *_placeholderImage;
    double _imageLeadingMargin;
    double _imageToNameLabelMargin;
    UIColor *_selectedBackgroundColor;
    double _nameToSubtitlePadding;
    struct CGSize _imageSize;
}

@property(nonatomic) double nameToSubtitlePadding; // @synthesize nameToSubtitlePadding=_nameToSubtitlePadding;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(nonatomic) double imageToNameLabelMargin; // @synthesize imageToNameLabelMargin=_imageToNameLabelMargin;
@property(nonatomic) double imageLeadingMargin; // @synthesize imageLeadingMargin=_imageLeadingMargin;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *nameLabelStyle; // @synthesize nameLabelStyle=_nameLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

