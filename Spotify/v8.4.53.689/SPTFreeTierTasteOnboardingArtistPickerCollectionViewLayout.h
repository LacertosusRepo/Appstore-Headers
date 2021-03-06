//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

#import "GLUEStyleable.h"

@class NSString;

@interface SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayout : UICollectionViewFlowLayout <GLUEStyleable>
{
    unsigned long long _itemsPerRow;
    unsigned long long _additionalItemHeight;
    double _interitemSpacing;
}

@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) unsigned long long additionalItemHeight; // @synthesize additionalItemHeight=_additionalItemHeight;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
- (void)glue_applyStyle:(id)arg1;
- (void)prepareLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

