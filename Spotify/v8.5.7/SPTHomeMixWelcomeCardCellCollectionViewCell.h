//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GLUELabel, SPTHomeMixMemberPileContainerView;

@interface SPTHomeMixWelcomeCardCellCollectionViewCell : UICollectionViewCell
{
    GLUELabel *_name;
    SPTHomeMixMemberPileContainerView *_facePilesContainerView;
}

@property(readonly, nonatomic) SPTHomeMixMemberPileContainerView *facePilesContainerView; // @synthesize facePilesContainerView=_facePilesContainerView;
@property(readonly, nonatomic) GLUELabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

