//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKShareHandler-Protocol.h"

@class NSDictionary, NSString, NSURL, SPTSharingSDKImageDownloader, SPTSharingSDKLinkGenerator, UIViewController;
@protocol SPTSharingSDKDeeplinkHandler, SPTSharingSDKDestination, SPTSharingSDKEntityData, SPTSharingSDKPasteboardHandler;

@interface SPTSharingSDKInstagramStoriesShareHandler : NSObject <SPTSharingSDKShareHandler>
{
    id <SPTSharingSDKDestination> _destination;
    id <SPTSharingSDKEntityData> _entityData;
    UIViewController *_contextViewController;
    SPTSharingSDKImageDownloader *_imageDownloader;
    SPTSharingSDKLinkGenerator *_linkGenerator;
    id <SPTSharingSDKDeeplinkHandler> _deeplinkHandler;
    id <SPTSharingSDKPasteboardHandler> _pasteboardHandler;
    NSURL *_stickerImageURL;
    NSDictionary *_extraPasteboardItems;
}

+ (id)buildLinkGenerationPayloadFromEntityData:(id)arg1;
+ (id)makeInstagramDeeplinkURL;
+ (id)failedToDeeplinkError;
@property(readonly, nonatomic) NSDictionary *extraPasteboardItems; // @synthesize extraPasteboardItems=_extraPasteboardItems;
@property(readonly, nonatomic) NSURL *stickerImageURL; // @synthesize stickerImageURL=_stickerImageURL;
@property(readonly, nonatomic) __weak id <SPTSharingSDKPasteboardHandler> pasteboardHandler; // @synthesize pasteboardHandler=_pasteboardHandler;
@property(readonly, nonatomic) __weak id <SPTSharingSDKDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(readonly, nonatomic) __weak SPTSharingSDKLinkGenerator *linkGenerator; // @synthesize linkGenerator=_linkGenerator;
@property(readonly, nonatomic) __weak SPTSharingSDKImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) __weak UIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(readonly, nonatomic) id <SPTSharingSDKEntityData> entityData; // @synthesize entityData=_entityData;
@property(readonly, nonatomic) id <SPTSharingSDKDestination> destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)deeplinkIntoInstagramWithShareableURL:(id)arg1 stickerImage:(id)arg2 extraPasteboardItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performShareAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
