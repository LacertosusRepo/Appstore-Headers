//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSSet;

@protocol EXP_HUBComponentLayoutManager
- (double)horizontalOffsetForComponentsWithLayoutTraits:(NSArray *)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andHeaderComponentWithLayoutTraits:(NSSet *)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andContentEdge:(unsigned long long)arg2;
@end

