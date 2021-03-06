//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTDefaultLayoutStyle.h"

@class GIMMe;

@interface YTAppLayoutStyle : YTDefaultLayoutStyle
{
    double _NGWatchMiniBarInsetBottom;
    double _NGWatchMiniBarAppBottomOffset;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)visitViewControllerTree:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)visitEntireViewControllerTreeWithBlock:(CDUnknownBlockType)arg1;
- (void)setNGWatchMiniBarAppBottomOffset:(double)arg1;
- (double)NGWatchMiniBarAppBottomOffset;
- (void)setNGWatchMiniBarInsetBottom:(double)arg1;
- (double)NGWatchMiniBarInsetBottom;
- (struct UIEdgeInsets)navBarTitleEdgeInsetsWithBackButtonHidden:(_Bool)arg1 hasImage:(_Bool)arg2;
- (long long)navigationBarTitleTextAlignment;
- (double)navigationBarHeight;
- (struct UIEdgeInsets)innerTubeCollectionViewContentInsetForStyleContext:(id)arg1;
- (long long)innerTubeCollectionViewLayout;
- (long long)innerTubeCollectionViewFormat;
- (long long)maximumTabCountForStyleContext:(id)arg1;
- (long long)tabStyleForStyleContext:(id)arg1;
- (long long)tabStyle;
- (id)init;

@end

