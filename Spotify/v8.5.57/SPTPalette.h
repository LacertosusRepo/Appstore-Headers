//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSSet, SPTPaletteSwatch;

@interface SPTPalette : NSObject <NSCopying>
{
    NSSet *_allSwatches;
    NSDictionary *_selectedSwatches;
}

+ (id)scoresForSwatches:(id)arg1 target:(id)arg2;
+ (_Bool)shouldSwatch:(id)arg1 beScoredForTarget:(id)arg2 usedColors:(id)arg3;
+ (id)maxScoredSwatchForTarget:(id)arg1 swatches:(id)arg2 usedColors:(id)arg3;
+ (id)dominantSwatchFromSwatches:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *selectedSwatches; // @synthesize selectedSwatches=_selectedSwatches;
@property(readonly, copy, nonatomic) NSSet *allSwatches; // @synthesize allSwatches=_allSwatches;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToPalette:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSelectedSwatches:(id)arg1 allSwatches:(id)arg2;
- (id)init;
- (id)initWithCGImage:(struct CGImage *)arg1 configuration:(id)arg2;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *vibrantSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *mutedSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *lightVibrantSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *lightMutedSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *darkVibrantSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *darkMutedSwatch;
@property(readonly, copy, nonatomic) SPTPaletteSwatch *dominantSwatch;
- (id)initWithPixels:(const union SPTColor *)arg1 count:(unsigned long long)arg2 configuration:(id)arg3;
- (id)initWithImage:(id)arg1 configuration:(id)arg2;

@end

