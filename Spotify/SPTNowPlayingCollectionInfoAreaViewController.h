//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

#import "SPTNowPlayingAuxiliaryActionsModelObserver.h"

@class NSString;

@interface SPTNowPlayingCollectionInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController <SPTNowPlayingAuxiliaryActionsModelObserver>
{
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
}

@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
- (void).cxx_destruct;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)auxiliaryActionsModelDidChangeCollectionState:(id)arg1;
- (void)updateCollectionButton;
- (void)addToCollectionPressed:(id)arg1;
- (id)provideLeftAccessoryButton;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 options:(long long)arg3 logger:(id)arg4 collectionTestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

