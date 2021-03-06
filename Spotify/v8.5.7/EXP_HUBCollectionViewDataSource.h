//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCollectionViewLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class EXP_HUBComponentRegistry, EXP_HUBComponentViewManager, NSArray, NSString;

@interface EXP_HUBCollectionViewDataSource : NSObject <EXP_HUBCollectionViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_componentModels;
    EXP_HUBComponentRegistry *_componentRegistry;
    EXP_HUBComponentViewManager *_componentViewManager;
    struct CGPoint _lastContentOffset;
}

@property(readonly, nonatomic) EXP_HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(copy, nonatomic) NSArray *componentModels; // @synthesize componentModels=_componentModels;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 layout:(id)arg2 layoutTraitsForComponentAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForComponentAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)componentModelForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)componentViewFromCell:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 componentViewManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

