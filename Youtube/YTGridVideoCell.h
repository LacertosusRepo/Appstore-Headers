//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGridCell.h"

#import "YTDismissableCellProtocol.h"
#import "YTOfflinePlaylistItem.h"
#import "YTOfflineVideoItem.h"
#import "YTRejectedVideoActionProtocol.h"

@class NSString, UIView;

@interface YTGridVideoCell : YTGridCell <YTDismissableCellProtocol, YTOfflinePlaylistItem, YTOfflineVideoItem, YTRejectedVideoActionProtocol>
{
    UIView *_dismissedCellOverlayView;
}

+ (Class)viewClass;
@property(retain, nonatomic) UIView *dismissedCellOverlayView; // @synthesize dismissedCellOverlayView=_dismissedCellOverlayView;
- (void).cxx_destruct;
- (void)setRejectedButtonActionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissalPrepareForReuse;
- (void)updateVideoThumbnailClientStatus:(unsigned long long)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1;
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateProgressOverlayWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3;
- (void)setSpaceUsageString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1 useBlueTypeVariant:(_Bool)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
- (struct CGRect)dismissableCellThumbnailFrame;
- (id)dismissableView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

