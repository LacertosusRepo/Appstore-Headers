//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPaletteSwatch;

@interface VISREFPaletteSwatchContainer : NSObject
{
    SPTPaletteSwatch *_swatch;
    double _colorSortingScore;
}

+ (id)containerWithSwatch:(id)arg1;
@property(nonatomic) double colorSortingScore; // @synthesize colorSortingScore=_colorSortingScore;
@property(readonly, nonatomic) SPTPaletteSwatch *swatch; // @synthesize swatch=_swatch;
- (void).cxx_destruct;
- (id)initWithSwatch:(id)arg1;

@end

