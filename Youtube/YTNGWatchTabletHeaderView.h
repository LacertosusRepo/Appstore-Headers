//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, YTQTMButton;

@interface YTNGWatchTabletHeaderView : UIView
{
    YTQTMButton *_minimizeButton;
    YTQTMButton *_listViewButton;
    NSMutableArray *_accessibilityElements;
    id <YTNGWatchTabletHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTNGWatchTabletHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapListViewButton;
- (void)didTapMinimizeButton;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

