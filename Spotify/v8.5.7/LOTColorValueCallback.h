//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTColorValueDelegate-Protocol.h"

@class NSString;

@interface LOTColorValueCallback : NSObject <LOTColorValueDelegate>
{
    struct CGColor *_colorValue;
}

+ (id)withCGColor:(struct CGColor *)arg1;
@property(nonatomic) struct CGColor *colorValue; // @synthesize colorValue=_colorValue;
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

