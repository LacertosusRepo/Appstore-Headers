//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet;

@protocol HUBComponentLayoutManager
- (double)horizontalOffsetForComponentsWithLayoutTraits:(NSArray *)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andHeaderComponentWithLayoutTraits:(NSSet *)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andContentEdge:(unsigned long long)arg2;
@end

