//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPodcastContextMenuProvider.h"

@class NSString, SPTShowContextMenuController;

@interface SPTPodcastContextMenuProviderImplementation : NSObject <SPTPodcastContextMenuProvider>
{
    id <SPTShowEntityService> _showEntityService;
    SPTShowContextMenuController *_contextMenuController;
    id <SPTEpisodeContextMenuControllerDelegate> _contextMenuDelegate;
}

@property(nonatomic) __weak id <SPTEpisodeContextMenuControllerDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate=_contextMenuDelegate;
@property(retain, nonatomic) SPTShowContextMenuController *contextMenuController; // @synthesize contextMenuController=_contextMenuController;
@property(nonatomic) __weak id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
- (void).cxx_destruct;
- (void)presentContextMenuForEpisodeURI:(id)arg1 withMetadata:(id)arg2 sourceContextURI:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5 options:(id)arg6;
- (void)presentContextMenuForEpisodeURI:(id)arg1 withMetadata:(id)arg2 sourceContextURI:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (id)initWithShowEntityService:(id)arg1 contextMenuController:(id)arg2 contextMenuDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

