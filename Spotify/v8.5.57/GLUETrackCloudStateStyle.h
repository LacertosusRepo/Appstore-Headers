//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSString, UIColor;

@interface GLUETrackCloudStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _alpha;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

