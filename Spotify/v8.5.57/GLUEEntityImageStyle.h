//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, NSString, UIColor;

@interface GLUEEntityImageStyle : NSObject <GLUEStyle>
{
    GLUEImageStyle *_imageStyle;
    UIColor *_badgeBackgroundColor;
    double _badgeRadiusScale;
    UIColor *_badgeIconColor;
    double _badgeIconOffsetMultiplier;
    double _badgeIconRadiusScale;
}

@property(nonatomic) double badgeIconRadiusScale; // @synthesize badgeIconRadiusScale=_badgeIconRadiusScale;
@property(nonatomic) double badgeIconOffsetMultiplier; // @synthesize badgeIconOffsetMultiplier=_badgeIconOffsetMultiplier;
@property(copy, nonatomic) UIColor *badgeIconColor; // @synthesize badgeIconColor=_badgeIconColor;
@property(nonatomic) double badgeRadiusScale; // @synthesize badgeRadiusScale=_badgeRadiusScale;
@property(copy, nonatomic) UIColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToEntityImageStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
