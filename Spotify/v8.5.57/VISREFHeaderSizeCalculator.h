//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VISREFHeaderSizeCalculator : NSObject
{
}

+ (double)calculateFullBleedHeaderHeightWithWindowSize:(struct CGSize)arg1 traitCollection:(id)arg2 contentComponent:(long long)arg3;
+ (double)calculateHeaderHeightWithWindowSize:(struct CGSize)arg1 traitCollection:(id)arg2 hasDescription:(_Bool)arg3 hasCreatorRow:(_Bool)arg4;
+ (_Bool)useMediumHeaderForFullBleed:(struct CGSize)arg1;
+ (_Bool)useMediumHeader:(struct CGSize)arg1;
+ (_Bool)useSmallHeader:(struct CGSize)arg1;

@end

