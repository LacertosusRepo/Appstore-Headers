//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTPathValueDelegate-Protocol.h"

@class NSString;

@interface LOTPathValueCallback : NSObject <LOTPathValueDelegate>
{
    const struct CGPath *_pathValue;
}

+ (id)withCGPath:(const struct CGPath *)arg1;
@property(nonatomic) const struct CGPath *pathValue; // @synthesize pathValue=_pathValue;
- (struct CGPath *)pathForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

