//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTArtistAboutBiographyViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_bodyLabelStyle;
    UIColor *_linkTextColor;
    GLUEImageStyle *_biographyAuthorImageViewStyle;
    GLUELabelStyle *_biographyAuthorLabelStyle;
    GLUEButtonStyle *_biographySocialLinkButtonStyle;
    struct CGSize _biographyAuthorImageSize;
}

@property(copy, nonatomic) GLUEButtonStyle *biographySocialLinkButtonStyle; // @synthesize biographySocialLinkButtonStyle=_biographySocialLinkButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *biographyAuthorLabelStyle; // @synthesize biographyAuthorLabelStyle=_biographyAuthorLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *biographyAuthorImageViewStyle; // @synthesize biographyAuthorImageViewStyle=_biographyAuthorImageViewStyle;
@property(nonatomic) struct CGSize biographyAuthorImageSize; // @synthesize biographyAuthorImageSize=_biographyAuthorImageSize;
@property(copy, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(copy, nonatomic) GLUELabelStyle *bodyLabelStyle; // @synthesize bodyLabelStyle=_bodyLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

