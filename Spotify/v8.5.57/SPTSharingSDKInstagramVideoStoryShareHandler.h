//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTSharingSDKInstagramStoriesShareHandler.h"

@class SPTSharingSDKImageDownloader, SPTSharingSDKLinkGenerator, UIViewController;
@protocol SPTSharingSDKDeeplinkHandler, SPTSharingSDKDestination, SPTSharingSDKEntityData, SPTSharingSDKPasteboardHandler;

@interface SPTSharingSDKInstagramVideoStoryShareHandler : SPTSharingSDKInstagramStoriesShareHandler
{
    id <SPTSharingSDKDestination> _destination;
    id <SPTSharingSDKEntityData> _entityData;
    UIViewController *_contextViewController;
    SPTSharingSDKImageDownloader *_imageDownloader;
    SPTSharingSDKLinkGenerator *_linkGenerator;
    id <SPTSharingSDKDeeplinkHandler> _deeplinkHandler;
    id <SPTSharingSDKPasteboardHandler> _pasteboardHandler;
}

- (id)pasteboardHandler;
- (id)deeplinkHandler;
- (id)linkGenerator;
- (id)imageDownloader;
- (id)contextViewController;
- (id)entityData;
- (id)destination;
- (void).cxx_destruct;
- (id)extraPasteboardItems;
- (id)stickerImageURL;
- (id)initWithDestination:(id)arg1 entityData:(id)arg2 contextViewController:(id)arg3 linkGenerator:(id)arg4 imageDownloader:(id)arg5 deeplinkHandler:(id)arg6 pasteboardHandler:(id)arg7;

@end
