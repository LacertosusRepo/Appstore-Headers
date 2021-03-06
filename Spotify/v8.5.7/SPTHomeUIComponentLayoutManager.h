//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBComponentLayoutManager-Protocol.h"

@protocol EXP_HUBComponentLayoutManager, GLUETheme;

@interface SPTHomeUIComponentLayoutManager : NSObject <EXP_HUBComponentLayoutManager>
{
    id <GLUETheme> _theme;
    id <EXP_HUBComponentLayoutManager> _hugsLayoutManager;
}

@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> hugsLayoutManager; // @synthesize hugsLayoutManager=_hugsLayoutManager;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(id)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(id)arg1 andHeaderComponentWithLayoutTraits:(id)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (id)initWithHugsLayoutManager:(id)arg1 theme:(id)arg2;

@end

