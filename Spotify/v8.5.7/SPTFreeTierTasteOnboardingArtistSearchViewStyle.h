//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECollectionViewStyle, GLUEGradientStyle, NSString, SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle, UIColor, UIFont, UIImage;
@protocol GLUEStyle;

@interface SPTFreeTierTasteOnboardingArtistSearchViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEGradientStyle *_backgroundOverlayGradientStyle;
    GLUECollectionViewStyle *_collectionViewStyle;
    SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle<GLUEStyle> *_collectionViewLayoutStyle;
    unsigned long long _searchBarStyle;
    UIFont *_searchBarFont;
    UIColor *_searchBarTextColor;
    UIImage *_searchBarFieldBackground;
    UIImage *_searchBarSearchIcon;
    UIImage *_searchBarClearIcon;
    UIImage *_searchBarClearIconHighlighted;
    struct UIOffset _searchBarTextOffset;
    struct UIOffset _searchBarClearIconOffset;
}

@property(nonatomic) struct UIOffset searchBarClearIconOffset; // @synthesize searchBarClearIconOffset=_searchBarClearIconOffset;
@property(nonatomic) struct UIOffset searchBarTextOffset; // @synthesize searchBarTextOffset=_searchBarTextOffset;
@property(retain, nonatomic) UIImage *searchBarClearIconHighlighted; // @synthesize searchBarClearIconHighlighted=_searchBarClearIconHighlighted;
@property(retain, nonatomic) UIImage *searchBarClearIcon; // @synthesize searchBarClearIcon=_searchBarClearIcon;
@property(retain, nonatomic) UIImage *searchBarSearchIcon; // @synthesize searchBarSearchIcon=_searchBarSearchIcon;
@property(retain, nonatomic) UIImage *searchBarFieldBackground; // @synthesize searchBarFieldBackground=_searchBarFieldBackground;
@property(retain, nonatomic) UIColor *searchBarTextColor; // @synthesize searchBarTextColor=_searchBarTextColor;
@property(retain, nonatomic) UIFont *searchBarFont; // @synthesize searchBarFont=_searchBarFont;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(copy, nonatomic) SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle<GLUEStyle> *collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionViewStyle; // @synthesize collectionViewStyle=_collectionViewStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundOverlayGradientStyle; // @synthesize backgroundOverlayGradientStyle=_backgroundOverlayGradientStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

