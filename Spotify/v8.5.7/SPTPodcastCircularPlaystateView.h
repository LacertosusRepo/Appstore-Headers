//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SPTPodcastCircularPlaystateView : UIView
{
    double _completionRatio;
}

@property(nonatomic) double completionRatio; // @synthesize completionRatio=_completionRatio;
- (void)drawRect:(struct CGRect)arg1;
- (double)quantizedCompletionRatio;
- (id)circleColor;
- (id)fillColor;
- (struct CGSize)preferedSize;
- (id)initForConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

