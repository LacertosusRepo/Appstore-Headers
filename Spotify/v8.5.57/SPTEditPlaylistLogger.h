//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileEditPlaylistEventFactory, SPTViewLogger;

@interface SPTEditPlaylistLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    id <SPTUBIMobileEditPlaylistEventFactory> _ubiEventFactory;
    id <SPTUBILogger> _ubiLogger;
    NSURL *_playlistURL;
}

@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIMobileEditPlaylistEventFactory> ubiEventFactory; // @synthesize ubiEventFactory=_ubiEventFactory;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithSectionId:(id)arg1 userIntent:(id)arg2;
- (void)logPressedCancelInEditView;
- (void)logPressedDoneInEditView;
- (void)logUpdateDescription;
- (void)logRenamePlaylist;
- (void)logDeletedTrackInEditViewWithURL:(id)arg1;
- (void)logMovedTrackInEditViewWithURL:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 playlistURL:(id)arg3 ubiLogger:(id)arg4 ubiEventFactory:(id)arg5;

@end

