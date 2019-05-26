//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKCastDeviceStatusListener-Protocol.h"
#import "GCKDiscoveryManagerListener-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GCKBFilteredIndexMap, GCKDevice, GCKDiscoveryManager, GCKSessionManager, GCKUIDeviceVolumeController, GCKUIMediaController, GCKUIMultistateButton, GCKUIStyleAttributes, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UILabel, UISlider, UITableView, UITapGestureRecognizer, UIView;
@protocol GCKUIDeviceConnectionViewControllerDelegate;

@interface GCKUIDeviceConnectionViewController : UIViewController <GCKDiscoveryManagerListener, GCKCastDeviceStatusListener, GCKSessionManagerListener, UITableViewDataSource, UITableViewDelegate>
{
    GCKSessionManager *_sessionManager;
    GCKDevice *_selectedDevice;
    GCKUIDeviceVolumeController *_deviceVolumeController;
    GCKUIMediaController *_mediaController;
    GCKUIStyleAttributes *_styleAttributes;
    GCKUIStyleAttributes *_styleAttributesForNavigation;
    GCKUIStyleAttributes *_styleAttributesForToolbar;
    GCKBFilteredIndexMap *_tableViewFilter;
    GCKDiscoveryManager *_discoveryManager;
    _Bool _mediaControlContentVisible;
    _Bool _mediaUnavailableViewVisible;
    _Bool _currentDeviceChanged;
    NSMutableArray *_multizoneDeviceControllersSortedArray;
    NSMutableDictionary *_multizoneDeviceControllers;
    unsigned long long _castStateInTableView;
    UIView *_mediaControlView;
    UIView *_mediaControlContentView;
    UIView *_mediaControlMetadataView;
    UIView *_mediaControlMetadataContentView;
    UILabel *_mediaTitleLabel;
    UITapGestureRecognizer *_mediaTitleLabelTapRecognizer;
    UILabel *_smartSubtitleLabel;
    UITapGestureRecognizer *_smartSubtitleLabelTapRecognizer;
    UIImageView *_thumbnailImageView;
    UITapGestureRecognizer *_thumbnailImageTapRecognizer;
    GCKUIMultistateButton *_playPauseButton;
    UISlider *_mediaControlViewVolumeSlider;
    UIActivityIndicatorView *_mediaLoadingIndicator;
    UIImageView *_volumeIcon;
    UIImageView *_noMediaVolumeIcon;
    UIView *_mediaUnavailableView;
    UIView *_mediaUnavailableContentView;
    UILabel *_mediaUnavailableLabel;
    UISlider *_mediaUnavailableViewVolumeSlider;
    UIBarButtonItem *_cancelBarButton;
    UIBarButtonItem *_stopCastingBarButton;
    UITableView *_tableView;
    id <GCKUIDeviceConnectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKUIDeviceConnectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (_Bool)filterDevice:(id)arg1;
- (void)refilterTableView;
- (void)createMultizoneDeviceControllerForSession:(id)arg1;
- (void)detachFromCastSession;
- (void)attachToCastSession:(id)arg1;
- (void)setMediaControllerViewVisible:(_Bool)arg1 mediaUnavailableViewVisible:(_Bool)arg2;
- (_Bool)isTableShowingDeviceList;
- (_Bool)shouldShowDeviceStatus:(id)arg1;
- (void)castSession:(id)arg1 didRemoveMultizoneDeviceWithID:(id)arg2;
- (void)castSession:(id)arg1 didUpdateMultizoneDevice:(id)arg2;
- (void)castSession:(id)arg1 didAddMultizoneDevice:(id)arg2;
- (void)castSession:(id)arg1 didReceiveMultizoneStatus:(id)arg2;
- (void)sessionManager:(id)arg1 didUpdateDefaultSessionOptionsForDeviceCategory:(id)arg2;
- (void)sessionManager:(id)arg1 session:(id)arg2 didUpdateDevice:(id)arg3;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (void)didRemoveDeviceAtIndex:(unsigned long long)arg1;
- (void)didUpdateDevice:(id)arg1 atIndex:(unsigned long long)arg2 andMoveToIndex:(unsigned long long)arg3;
- (void)didUpdateDevice:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didInsertDevice:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didUpdateDeviceList;
- (void)willUpdateDeviceList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForCellWithReusableID:(id)arg2;
- (id)tableView:(id)arg1 deviceCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 multizoneDeviceCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 connectingStatusCellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didTapMediaControls:(id)arg1;
- (void)disconnectDeviceAndStopCasting:(_Bool)arg1;
- (void)didTapStopCasting:(id)arg1;
- (void)dismissView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)syncWithOrientation;
- (void)syncWithCastState;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

