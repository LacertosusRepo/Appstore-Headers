//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTStorylinesAttributionStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUELabelStyle *_labelStyle;
}

+ (id)styleWithTheme:(id)arg1;
@property(copy, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

