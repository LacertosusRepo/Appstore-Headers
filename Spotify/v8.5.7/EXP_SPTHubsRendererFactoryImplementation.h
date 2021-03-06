//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_SPTHubsRendererFactory-Protocol.h"

@class EXP_SPTHubContentOperationFactoryImplementation, EXP_SPTHubDefaultCommandHandlers, EXP_SPTHubLoggerFactoryImplementation, NSString;
@protocol SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTHugsFactory, SPTImageLoaderFactory, SPTLinkDispatcher, SPTPlayerFeature;

@interface EXP_SPTHubsRendererFactoryImplementation : NSObject <EXP_SPTHubsRendererFactory>
{
    id <SPTPlayerFeature> _playerService;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    EXP_SPTHubDefaultCommandHandlers *_commandHandlerFactory;
    EXP_SPTHubContentOperationFactoryImplementation *_contentOperationFactory;
    EXP_SPTHubLoggerFactoryImplementation *_loggerFactory;
}

@property(readonly, nonatomic) EXP_SPTHubLoggerFactoryImplementation *loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) EXP_SPTHubContentOperationFactoryImplementation *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) EXP_SPTHubDefaultCommandHandlers *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
- (void).cxx_destruct;
- (id)createCommandHandlerFactoryWithFeatureIdentifier:(id)arg1 contextMenuLogContext:(id)arg2;
- (id)createCommandHandlerFactoryWithFeatureIdentifier:(id)arg1 contextMenuLogContextIphone:(id)arg2 contextMenuLogContextIpad:(id)arg3;
- (id)provideLoggerFactory;
- (id)provideContentOperationFactory;
- (id)createImageLoaderFactoryWithLogger:(id)arg1;
- (id)provideImageLoaderFactory;
- (id)initWithTheme:(id)arg1 imageLoaderFactory:(id)arg2 dataLoaderFactory:(id)arg3 offlineModeState:(id)arg4 playerService:(id)arg5 linkDispatcher:(id)arg6 hugsFactory:(id)arg7 contextMenuOptionsFactory:(id)arg8 presenterFactory:(id)arg9 logCenter:(id)arg10 viewLoggerFactory:(id)arg11 cosmosFeature:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

