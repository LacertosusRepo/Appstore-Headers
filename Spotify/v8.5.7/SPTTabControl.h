//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class CALayer, NSArray;

@interface SPTTabControl : UISegmentedControl
{
    _Bool _labelsReplaced;
    CALayer *_highlightLayer;
    NSArray *_labelTitles;
}

@property(nonatomic) _Bool labelsReplaced; // @synthesize labelsReplaced=_labelsReplaced;
@property(retain, nonatomic) NSArray *labelTitles; // @synthesize labelTitles=_labelTitles;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
- (void).cxx_destruct;
- (void)repositionHighlight;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)highlightSelectedLabel;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

