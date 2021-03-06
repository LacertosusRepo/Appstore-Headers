//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingCollectionInfoAreaViewController.h"

@class SPTNowPlayingMusicInfoAreaModel;
@protocol SPContextMenuFeature, SPTContextMenuPresenter, SPTPSXTestManager;

@interface SPTNowPlayingMusicInfoAreaViewController : SPTNowPlayingCollectionInfoAreaViewController
{
    id <SPTPSXTestManager> _psxTestManager;
    SPTNowPlayingMusicInfoAreaModel *_areaModel;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPContextMenuFeature> _contextMenu;
}

@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) SPTNowPlayingMusicInfoAreaModel *areaModel; // @synthesize areaModel=_areaModel;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
- (void).cxx_destruct;
- (void)contextMenuPressed:(id)arg1;
- (id)provideRightAccessoryButton;
- (id)initWithModel:(id)arg1 theme:(id)arg2 contextMenuFeature:(id)arg3 logger:(id)arg4 linkDispatcher:(id)arg5 psxTestManager:(id)arg6 areaModel:(id)arg7 collectionTestManager:(id)arg8 options:(long long)arg9;

@end

