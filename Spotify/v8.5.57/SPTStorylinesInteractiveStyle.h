//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUEButtonStyle, NSString, SPTStorylinesAttributionStyle;

@interface SPTStorylinesInteractiveStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    SPTStorylinesAttributionStyle *_attributionStyle;
    GLUEButtonStyle *_followButtonStyle;
}

+ (id)styleWithTheme:(id)arg1;
@property(copy, nonatomic) GLUEButtonStyle *followButtonStyle; // @synthesize followButtonStyle=_followButtonStyle;
@property(copy, nonatomic) SPTStorylinesAttributionStyle *attributionStyle; // @synthesize attributionStyle=_attributionStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

