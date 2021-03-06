//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

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

