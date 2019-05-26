//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUBComponentResizeObservingViewDelegate;

@interface HUBComponentResizeObservingView : UIView
{
    id <HUBComponentResizeObservingViewDelegate> _delegate;
    UIView *_previousSuperview;
    struct CGSize _previousSize;
}

@property(nonatomic) __weak UIView *previousSuperview; // @synthesize previousSuperview=_previousSuperview;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(nonatomic) __weak id <HUBComponentResizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
