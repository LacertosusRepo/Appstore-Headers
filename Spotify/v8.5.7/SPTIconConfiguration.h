//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SPTIconConfiguration : NSObject
{
    _Bool _boundingRect;
    long long _icon;
    long long _iconSize;
    UIColor *_backgroundColor;
    UIColor *_iconColor;
    long long _textAlignment;
    UIColor *_boundingRectColor;
    struct CGSize _imageSize;
    struct UIEdgeInsets _iconEdgeInsets;
}

+ (id)placeholderIconConfigurationForIcon:(long long)arg1 imageSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIColor *boundingRectColor; // @synthesize boundingRectColor=_boundingRectColor;
@property(nonatomic) _Bool boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct UIEdgeInsets iconEdgeInsets; // @synthesize iconEdgeInsets=_iconEdgeInsets;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)init;

@end

