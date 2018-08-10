//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "UICollectionViewDelegateFlowLayout.h"
#import "YTResponder.h"

@class GIMMe, NSArray, NSMutableArray, NSString;

@interface YTBrowsyBarCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, YTResponder>
{
    NSMutableArray *_thumbnailControllers;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    NSArray *_items;
    id <YTBrowsyBarCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTBrowsyBarCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)hasThumbnailMapping:(id)arg1;
- (void)updateThumbnailMappingsForCell:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
