//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class SPTNowPlayingContentLayerViewModel;

@interface SPTNowPlayingContentLayerLayout : UICollectionViewFlowLayout
{
    SPTNowPlayingContentLayerViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTNowPlayingContentLayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)initWithViewModel:(id)arg1;

@end

