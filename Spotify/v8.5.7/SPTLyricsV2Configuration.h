//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAutoLockController, SPTLyricsV2Logger, SPTLyricsV2Service, SPTNetworkConnectivityController;
@protocol SPTGLUEImageLoaderFactory, SPTLyricsLineProgressManager, SPTModalPresentationController, SPTNowPlayingService, SPTPlayer;

@interface SPTLyricsV2Configuration : NSObject
{
    SPTAutoLockController *_autoLockController;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    SPTLyricsV2Logger *_logger;
    SPTLyricsV2Service *_lyricsService;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTPlayer> _player;
    id <SPTLyricsLineProgressManager> _progressManager;
}

@property(retain, nonatomic) id <SPTLyricsLineProgressManager> progressManager; // @synthesize progressManager=_progressManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) SPTLyricsV2Service *lyricsService; // @synthesize lyricsService=_lyricsService;
@property(retain, nonatomic) SPTLyricsV2Logger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTAutoLockController *autoLockController; // @synthesize autoLockController=_autoLockController;
- (void).cxx_destruct;

@end

