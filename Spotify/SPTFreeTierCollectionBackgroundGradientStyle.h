//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUEHeaderBackgroundStyle, NSString;

@interface SPTFreeTierCollectionBackgroundGradientStyle : NSObject <GLUEStyle>
{
    double _height;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEHeaderBackgroundStyle *_backgroundOverlayStyle;
}

@property(retain, nonatomic) GLUEHeaderBackgroundStyle *backgroundOverlayStyle; // @synthesize backgroundOverlayStyle=_backgroundOverlayStyle;
@property(retain, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
