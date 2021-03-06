//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTFreeTierArtistPinnedItemCommentStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    GLUEImageStyle *_artistImageStyle;
    GLUELabelStyle *_labelStyle;
    GLUELabelStyle *_placeholderLabelStyle;
    struct CGSize _artistImageSize;
}

@property(copy, nonatomic) GLUELabelStyle *placeholderLabelStyle; // @synthesize placeholderLabelStyle=_placeholderLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
@property(copy, nonatomic) GLUEImageStyle *artistImageStyle; // @synthesize artistImageStyle=_artistImageStyle;
@property(nonatomic) struct CGSize artistImageSize; // @synthesize artistImageSize=_artistImageSize;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

