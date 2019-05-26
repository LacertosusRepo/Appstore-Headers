//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SPTHomeMixFamilyPileConfigurator, SPTHomeMixGlueTheme, SPTHomeMixWelcomeViewModel, UILayoutGuide;

@interface SPTHomeMixWelcomeCellConfigurator : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    SPTHomeMixGlueTheme *_theme;
    SPTHomeMixWelcomeViewModel *_model;
    SPTHomeMixFamilyPileConfigurator *_facePilesConfigurator;
    UILayoutGuide *_parentSafeAreaLayoutGuide;
    double _layoutHeaderHeight;
    double _referenceCellHeight;
}

@property(nonatomic) double referenceCellHeight; // @synthesize referenceCellHeight=_referenceCellHeight;
@property(nonatomic) double layoutHeaderHeight; // @synthesize layoutHeaderHeight=_layoutHeaderHeight;
@property(retain, nonatomic) UILayoutGuide *parentSafeAreaLayoutGuide; // @synthesize parentSafeAreaLayoutGuide=_parentSafeAreaLayoutGuide;
@property(retain, nonatomic) SPTHomeMixFamilyPileConfigurator *facePilesConfigurator; // @synthesize facePilesConfigurator=_facePilesConfigurator;
@property(retain, nonatomic) SPTHomeMixWelcomeViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)referenceCellModel;
- (id)referenceTwoLinesCell:(id)arg1;
- (void)applyCellStyle:(id)arg1;
- (void)applyModel:(id)arg1 toCell:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)applyHeaderViewThemeAndContent:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)registerIdentifiersForCollectionView:(id)arg1;
- (id)initWithCollectionView:(id)arg1 theme:(id)arg2 model:(id)arg3 facePilesConfigurator:(id)arg4 parentSafeAreaLayoutGuide:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

