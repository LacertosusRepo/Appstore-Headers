//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistContextMenuPresenter-Protocol.h"

@class NSString;
@protocol SPTPodcastContextMenuProvider;

@interface SPTFreeTierPlaylistPodcastContextMenuPresenter : NSObject <SPTFreeTierPlaylistContextMenuPresenter>
{
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
}

@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
- (void).cxx_destruct;
- (_Bool)presentContextMenuForItemAtIndexPath:(id)arg1 itemsViewModel:(id)arg2 sender:(id)arg3 viewController:(id)arg4;
- (id)initWithContextMenuProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

