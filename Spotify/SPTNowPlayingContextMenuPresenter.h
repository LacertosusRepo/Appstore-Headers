//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextMenuPresenterDelegate.h"

@class NSString, SPTNowPlayingTestManager;

@interface SPTNowPlayingContextMenuPresenter : NSObject <SPTContextMenuPresenterDelegate>
{
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPContextMenuFeature> _contextMenu;
    SPTNowPlayingTestManager *_testManager;
    id <SPTContextMenuOptions> _contextMenuOptions;
}

@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(readonly, nonatomic) SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
- (void).cxx_destruct;
- (id)trackURLForPlayerTrack:(id)arg1;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (_Bool)presentVideoContextMenuForTrackMetadata:(id)arg1 inViewController:(id)arg2 senderView:(id)arg3;
- (id)provideContextMenuOptions;
- (_Bool)presentContextMenuForTrackMetadata:(id)arg1 inViewController:(id)arg2 senderView:(id)arg3;
- (void)dismiss;
- (id)initWithContextMenuFeature:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
