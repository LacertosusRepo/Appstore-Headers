//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VISREFEntityHeaderContentViewController.h"

#import "SPTFreeTierPlaylistHeader-Protocol.h"
#import "SPTFreeTierPlaylistVISREFHeaderControllerDelegate-Protocol.h"

@class NSString, VISREFBaseHeaderController;
@protocol SPTFreeTierPlaylistVISREFHeaderController;

@interface SPTFreeTierPlaylistVISREFHeaderViewController : VISREFEntityHeaderContentViewController <SPTFreeTierPlaylistVISREFHeaderControllerDelegate, SPTFreeTierPlaylistHeader>
{
}

- (void)popViewController;
- (struct CGPoint)snapOffset;
- (void)update;
- (void)setSearchBar:(id)arg1;
- (void)setupLayout;
@property(readonly, nonatomic) VISREFBaseHeaderController<SPTFreeTierPlaylistVISREFHeaderController> *playlistHeaderController;
- (void)headerControllerViewSuperviewHierarchyDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithHeaderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
