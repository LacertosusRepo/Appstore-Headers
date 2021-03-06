//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

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

