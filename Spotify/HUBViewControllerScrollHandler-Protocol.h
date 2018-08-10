//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HUBViewController;

@protocol HUBViewControllerScrollHandler
- (struct CGPoint)contentOffsetForDisplayingComponentAtIndex:(unsigned long long)arg1 scrollPosition:(unsigned long long)arg2 contentInset:(struct UIEdgeInsets)arg3 contentSize:(struct CGSize)arg4 viewController:(HUBViewController *)arg5;
- (struct CGPoint)targetContentOffsetForEndedScrollInViewController:(HUBViewController *)arg1 velocity:(struct CGVector)arg2 contentInset:(struct UIEdgeInsets)arg3 currentContentOffset:(struct CGPoint)arg4 proposedContentOffset:(struct CGPoint)arg5;
- (void)scrollingDidEndInViewController:(HUBViewController *)arg1 currentContentRect:(struct CGRect)arg2;
- (void)scrollViewDidScrollInViewController:(HUBViewController *)arg1 withContentOffset:(struct CGPoint)arg2;
- (void)scrollingWillStartInViewController:(HUBViewController *)arg1 currentContentRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)contentInsetsForViewController:(HUBViewController *)arg1 proposedContentInsets:(struct UIEdgeInsets)arg2;
- (double)scrollDecelerationRateForViewController:(HUBViewController *)arg1;
- (long long)keyboardDismissModeForViewController:(HUBViewController *)arg1;
- (_Bool)shouldAutomaticallyAdjustContentInsetsInViewController:(HUBViewController *)arg1;
- (_Bool)shouldShowScrollIndicatorsInViewController:(HUBViewController *)arg1;
@end

