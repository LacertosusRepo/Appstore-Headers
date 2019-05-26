//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class NSArray, NSString;

@interface SPTFriendsHomeFacepileDataSource : NSObject <UICollectionViewDataSource>
{
    NSArray *_imageURLs;
    id <GLUEImageLoader> _imageLoader;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;
- (id)entityCardStyle;
- (void)configureOverflowCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withImageURL:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerCellReuseForCollectionView:(id)arg1;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2 facepileImageURLs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
