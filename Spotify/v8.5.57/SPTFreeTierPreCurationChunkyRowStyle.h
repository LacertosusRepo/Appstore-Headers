//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEEntityRowStyle.h"

@class GLUETrackPreviewStyle;

@interface SPTFreeTierPreCurationChunkyRowStyle : GLUEEntityRowStyle
{
    GLUETrackPreviewStyle *_previewStyle;
    double _cornerRadius;
    double _contentInsets;
}

@property(nonatomic) double contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) GLUETrackPreviewStyle *previewStyle; // @synthesize previewStyle=_previewStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToEntityRowStyle:(id)arg1;
- (id)initWithEntityRowStyle:(id)arg1;

@end
