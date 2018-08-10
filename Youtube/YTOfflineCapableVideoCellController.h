//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVideoCellController.h"

#import "YTConnectionStatusControllerObserver.h"

@class NSData, NSString, YTConnectionStatusController, YTICommand, YTOfflineVideo;

@interface YTOfflineCapableVideoCellController : YTVideoCellController <YTConnectionStatusControllerObserver>
{
    _Bool _thumbnailIndicatorEnabled;
    _Bool _inlineBadgeEnabled;
    _Bool _shouldShowVideoSize;
    YTOfflineVideo *_lastFetchedOfflineVideo;
    NSData *_lastAttachedOfflinePlayerTrackingParams;
    YTICommand *_navigationEndpoint;
    YTConnectionStatusController *_connectionStatusController;
}

+ (void)updateOfflineVideoItem:(id)arg1 withClientOfflineData:(id)arg2 isConnected:(_Bool)arg3 isAnnotatedOnlineVideo:(_Bool)arg4 thumbnailIndicatorEnabled:(_Bool)arg5 shouldShowVideoSize:(_Bool)arg6 hasOfflineWatchEndpoint:(_Bool)arg7 inlineBadgeEnabled:(_Bool)arg8;
+ (_Bool)isAnnotatedOnlineVideo:(id)arg1;
@property(nonatomic) __weak YTConnectionStatusController *connectionStatusController; // @synthesize connectionStatusController=_connectionStatusController;
@property(readonly, nonatomic) _Bool shouldShowVideoSize; // @synthesize shouldShowVideoSize=_shouldShowVideoSize;
@property(readonly, nonatomic, getter=isInlineBadgeEnabled) _Bool inlineBadgeEnabled; // @synthesize inlineBadgeEnabled=_inlineBadgeEnabled;
@property(readonly, nonatomic, getter=isThumbnailIndicatorEnabled) _Bool thumbnailIndicatorEnabled; // @synthesize thumbnailIndicatorEnabled=_thumbnailIndicatorEnabled;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(retain, nonatomic) NSData *lastAttachedOfflinePlayerTrackingParams; // @synthesize lastAttachedOfflinePlayerTrackingParams=_lastAttachedOfflinePlayerTrackingParams;
@property(retain, nonatomic) YTOfflineVideo *lastFetchedOfflineVideo; // @synthesize lastFetchedOfflineVideo=_lastFetchedOfflineVideo;
- (void).cxx_destruct;
- (_Bool)handleUpsellResponderEvent:(id)arg1;
- (void)attachOfflinePlayerResponseIfChanged;
- (void)resetCellOfflineIndicators;
- (id)clientOfflineData;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)reloadClientData;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

