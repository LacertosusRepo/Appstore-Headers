//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, SPTInfoView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionEmptyEntityFooterView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTInfoView *_infoView;
}

+ (id)emptyEntityFooterViewForAlbumWithName:(id)arg1 width:(double)arg2 unplayableTracks:(_Bool)arg3 collectionTestManager:(id)arg4;
+ (id)emptyEntityFooterViewForArtistWithName:(id)arg1 width:(double)arg2 offline:(_Bool)arg3 unplayableTracks:(_Bool)arg4 followedByUser:(_Bool)arg5 collectionTestManager:(id)arg6;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

