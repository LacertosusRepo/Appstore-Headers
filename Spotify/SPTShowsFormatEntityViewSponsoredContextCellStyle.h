//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUELabelStyle, NSString;

@interface SPTShowsFormatEntityViewSponsoredContextCellStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_labelStyle;
    double _textAlpha;
}

+ (id)styleWithTheme:(id)arg1;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(copy, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

