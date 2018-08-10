//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class NSString, SPTFriendsHomeEntityViewModel, SPTFriendsHomeLogger;

@interface SPTFriendsHomeEntityUserRecommendationsViewDataSource : NSObject <UICollectionViewDataSource>
{
    SPTFriendsHomeEntityViewModel *_viewModel;
}

@property(readonly, nonatomic) __weak SPTFriendsHomeEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)followButtonTapped:(id)arg1;
- (void)configureUserCard:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerCellReuseForCollectionView:(id)arg1;
@property(readonly, nonatomic) SPTFriendsHomeLogger *logger;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

