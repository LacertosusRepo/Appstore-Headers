//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTEditPlaylistControllerObserver.h"
#import "YTReorderableSectionControllerProtocol.h"
#import "YTVideoListPlaylistIDResponderProvider.h"

@class GIMMe, NSString;

@interface YTPlaylistVideoListSectionController : YTInnerTubeSectionController <YTVideoListPlaylistIDResponderProvider, YTEditPlaylistControllerObserver, YTReorderableSectionControllerProtocol>
{
}

- (void)didMoveEntryAtIndex:(id)arg1 toIndexPath:(id)arg2;
- (void)didUpdateVideoList:(id)arg1;
- (id)createCellControllerForEntry:(id)arg1;
- (id)videoListPlaylistID;
- (void)loadWithModel:(id)arg1;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

