//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTSizeValueDelegate-Protocol.h"

@class NSString;

@interface LOTSizeValueCallback : NSObject <LOTSizeValueDelegate>
{
    struct CGSize _sizeValue;
}

+ (id)withPointValue:(struct CGSize)arg1;
@property(nonatomic) struct CGSize sizeValue; // @synthesize sizeValue=_sizeValue;
- (struct CGSize)sizeForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startSize:(struct CGSize)arg5 endSize:(struct CGSize)arg6 currentSize:(struct CGSize)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

