//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUECalendarThumbnailViewStyle, GLUEImageStyle, GLUELabelStyle, NSString, SPTArtistPinnedItemCommentStyle, UIColor;

@interface SPTArtistPinnedItemCardStyle : NSObject <GLUEStyle>
{
    double _heightToWidthScaleFactor;
    double _cornerRadius;
    GLUEImageStyle *_backgroundImageStyle;
    UIColor *_backgroundGradientStartColor;
    UIColor *_backgroundGradientEndColor;
    double _backgroundGradientStartPosition;
    double _backgroundGradientEndPosition;
    GLUEImageStyle *_contentImageStyle;
    GLUECalendarThumbnailViewStyle *_calendarViewStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    SPTArtistPinnedItemCommentStyle *_commentStyle;
    struct CGSize _contentImageSize;
    struct CGSize _disclosureViewSize;
}

@property(nonatomic) struct CGSize disclosureViewSize; // @synthesize disclosureViewSize=_disclosureViewSize;
@property(copy, nonatomic) SPTArtistPinnedItemCommentStyle *commentStyle; // @synthesize commentStyle=_commentStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUECalendarThumbnailViewStyle *calendarViewStyle; // @synthesize calendarViewStyle=_calendarViewStyle;
@property(copy, nonatomic) GLUEImageStyle *contentImageStyle; // @synthesize contentImageStyle=_contentImageStyle;
@property(nonatomic) struct CGSize contentImageSize; // @synthesize contentImageSize=_contentImageSize;
@property(nonatomic) double backgroundGradientEndPosition; // @synthesize backgroundGradientEndPosition=_backgroundGradientEndPosition;
@property(nonatomic) double backgroundGradientStartPosition; // @synthesize backgroundGradientStartPosition=_backgroundGradientStartPosition;
@property(copy, nonatomic) UIColor *backgroundGradientEndColor; // @synthesize backgroundGradientEndColor=_backgroundGradientEndColor;
@property(copy, nonatomic) UIColor *backgroundGradientStartColor; // @synthesize backgroundGradientStartColor=_backgroundGradientStartColor;
@property(copy, nonatomic) GLUEImageStyle *backgroundImageStyle; // @synthesize backgroundImageStyle=_backgroundImageStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double heightToWidthScaleFactor; // @synthesize heightToWidthScaleFactor=_heightToWidthScaleFactor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
