//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVQueuePlayer, IMAVPlayerSeek, IMPlayerItem, NSArray, NSMutableArray, NSString;
@protocol IMAVPlayerDataSource, IMAVPlayerDelegate, IMPlayerErrorHandler;

@interface IMAVPlayer : NSObject
{
    int itemType;
    id playerObserver;
    float previousPlayerRate;
    NSMutableArray *queuedItems;
    NSMutableArray *itemsWaitingForDifferentType;
    _Bool inactive;
    _Bool stoppingOnRequest;
    NSMutableArray *ignoreCurrentTimeNotificationForTimes;
    _Bool tmActive;
    _Bool tmWasPaused;
    int tmDirection;
    float tmIncrementTime;
    float tmCurrentTime;
    _Bool preparingSegment;
    _Bool initialSeekCorrectionInProgress;
    _Bool didPlayToItemEnd;
    float playbackRate;
    _Bool pausing;
    _Bool idleTimerDisabled;
    _Bool externalPlaybackActive;
    _Bool _postponePlaybackOfNextItem;
    _Bool _externalPlaybackThroughHDMI;
    id <IMPlayerErrorHandler> errorHandler;
    id <IMAVPlayerDataSource> dataSource;
    id <IMAVPlayerDelegate> delegate;
    IMAVPlayerSeek *currentSeek;
    IMPlayerItem *_currentItem;
    AVQueuePlayer *_currentPlayer;
    struct CGSize _presentationSize;
}

+ (id)subtitleStyleForCurrentItem;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) _Bool externalPlaybackThroughHDMI; // @synthesize externalPlaybackThroughHDMI=_externalPlaybackThroughHDMI;
@property(nonatomic) _Bool postponePlaybackOfNextItem; // @synthesize postponePlaybackOfNextItem=_postponePlaybackOfNextItem;
@property(nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive;
@property(readonly, nonatomic) NSArray *queuedItems; // @synthesize queuedItems;
@property(retain, nonatomic) AVQueuePlayer *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) IMPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(retain, nonatomic) IMAVPlayerSeek *currentSeek; // @synthesize currentSeek;
@property(nonatomic) __weak id <IMAVPlayerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <IMAVPlayerDataSource> dataSource; // @synthesize dataSource;
@property(nonatomic) __weak id <IMPlayerErrorHandler> errorHandler; // @synthesize errorHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *routeName;
- (void)updateSubtitleStyleForItem:(id)arg1;
- (void)globalSettingsDidChange;
@property(readonly, nonatomic) _Bool trickModeActive;
- (void)endTrickMode;
- (void)beginTrickMode:(int)arg1;
- (void)beginTrickMode:(int)arg1 withSpeed:(int)arg2;
- (void)stepByFrames:(int)arg1;
- (_Bool)canStepByFrames;
- (void)trickModeUpdate;
- (void)fastModeGoFaster;
- (void)seekTo:(float)arg1 completionHandler:(CDUnknownBlockType)arg2 accurate:(_Bool)arg3;
- (_Bool)canSeekDuringScrubbing;
@property(readonly, nonatomic) float currentTime;
@property(readonly, nonatomic) float duration;
@property(readonly, nonatomic) _Bool buffering;
@property(nonatomic) _Bool paused;
@property(nonatomic) float playbackRate;
- (void)updatePlaybackRate:(float)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)advanceToNextItem;
- (void)addItem:(id)arg1;
- (void)addItemInternal:(id)arg1;
- (void)checkMediaSelection:(id)arg1;
- (id)supportedSubtitleStreams:(id)arg1;
- (id)filteredOptionsForGroup:(id)arg1;
- (void)addItemFailed:(id)arg1 withError:(id)arg2;
- (void)start;
- (void)stopAndNotifyDelegate;
- (void)stop;
- (void)didPlayToItemEnd:(id)arg1;
- (void)playerCurrentItemChangedFrom:(id)arg1 to:(id)arg2;
- (void)updatePresentationSizeFrom:(id)arg1;
- (void)requestUpdateUserInterface;
- (void)remoteControlEventNotification:(id)arg1;
- (void)destroyPlayer;
- (long long)actionAtItemEnd;
- (void)periodicObserver;
- (void)createPlayer;
- (void)setPlayerRate:(float)arg1;
- (void)checkInitialSeekTime;
- (void)configureExternalPlayback;
- (void)externalPlaybackChanged;
- (void)checkIdleTimer;
- (_Bool)_externalPlaybackActive;
- (void)dealloc;
- (id)init;

@end

