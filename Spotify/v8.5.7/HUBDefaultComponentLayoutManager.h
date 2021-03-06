//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentLayoutManager-Protocol.h"

@interface HUBDefaultComponentLayoutManager : NSObject <HUBComponentLayoutManager>
{
    double _margin;
}

@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
- (_Bool)shouldStackComponentWithLayoutTraits:(id)arg1 belowComponentWithLayoutTraits:(id)arg2;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(id)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(id)arg1 andHeaderComponentWithLayoutTraits:(id)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (id)initWithMargin:(double)arg1;

@end

