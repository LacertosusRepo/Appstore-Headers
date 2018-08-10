//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASViewController.h"

#import "YTInnerTubeCollectionBehaviorResponderProvider.h"
#import "YTInnerTubeCollectionNodeDataSourceDelegate.h"
#import "YTResponder.h"
#import "YTSeparatorCollectionViewDelegateFlowLayout.h"

@class ELMCollectionNodeController, GIMMe, NSString, QTMPullToRefreshController, YTInnerTubeCollectionNodeDataSource;

@interface YTElementsSectionListViewController : ASViewController <YTInnerTubeCollectionNodeDataSourceDelegate, YTInnerTubeCollectionBehaviorResponderProvider, YTSeparatorCollectionViewDelegateFlowLayout, YTResponder>
{
    YTInnerTubeCollectionNodeDataSource *_dataSource;
    id <YTInnerTubeUIService> _service;
    ELMCollectionNodeController *_controller;
    QTMPullToRefreshController *_pullToRefreshController;
    id <YTCollectionViewUIFormatter> _formatter;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)shouldStoreAttributesOnPrepareLayout;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideBottomSeparatorAtSection:(long long)arg3 row:(long long)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideBottomSeparatorAtSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 itemIsHiddenAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView;
- (void)addEventHandlers;
- (void)refresh;
- (void)setScrollingEnabled:(_Bool)arg1;
- (void)setPullRefreshEnabled:(_Bool)arg1;
- (void)dataSourceDidReload;
- (void)loadWithDefaultModel:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)willMakeRequest:(id)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
