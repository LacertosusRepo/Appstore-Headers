//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, SPTShowsFormatEntityViewModel, SPTShowsFormatLogger, VISREFIntegrationManager;
@protocol SPTVideoURLAssetLoader;

@interface SPTShowsFormatEntityViewDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    SPTShowsFormatEntityViewModel *_viewModel;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    SPTShowsFormatLogger *_logger;
    VISREFIntegrationManager *_visualRefreshIntegrationManager;
}

@property(retain, nonatomic) VISREFIntegrationManager *visualRefreshIntegrationManager; // @synthesize visualRefreshIntegrationManager=_visualRefreshIntegrationManager;
@property(readonly, nonatomic) SPTShowsFormatLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(readonly, nonatomic) SPTShowsFormatEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)indexPathForDownloadRow;
- (id)indexPathForSponsoredRow;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateOfflineSyncStatusForAudioCell:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg1 videoAssetLoader:(id)arg2 logger:(id)arg3 visualRefreshIntegrationManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

