//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, GLUETrackAccessoryLabelStyle, NSString;

@interface SPTPodcastEpisodeContentViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_descriptionStyle;
    GLUELabelStyle *_titleStyle;
    GLUETrackAccessoryLabelStyle *_accessoryLabelStyle;
    double _imageCornerRadius;
    double _playButtonBottomConstraintConstant;
    struct CGSize _playButtonSize;
}

@property(nonatomic) double playButtonBottomConstraintConstant; // @synthesize playButtonBottomConstraintConstant=_playButtonBottomConstraintConstant;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(copy, nonatomic) GLUETrackAccessoryLabelStyle *accessoryLabelStyle; // @synthesize accessoryLabelStyle=_accessoryLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(copy, nonatomic) GLUELabelStyle *descriptionStyle; // @synthesize descriptionStyle=_descriptionStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

