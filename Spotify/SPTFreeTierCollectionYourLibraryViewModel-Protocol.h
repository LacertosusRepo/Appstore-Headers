//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController<SPTFreeTierCollectionEntityPage>;

@protocol SPTFreeTierCollectionYourLibraryViewModel <NSObject>
@property(readonly, nonatomic, getter=isCompactMode) _Bool compactMode;
@property(nonatomic) __weak id <SPTFreeTierCollectionYourLibraryViewModelDelegate> delegate;
- (UIViewController<SPTFreeTierCollectionEntityPage> *)pageViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (_Bool)isPageViewControllerLoaded:(UIViewController<SPTFreeTierCollectionEntityPage> *)arg1;
@end
