//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryPageProvider-Protocol.h"

@class NSString, NSURL, SPTPodcastYourLibraryShowsViewModel;
@protocol GLUEImageLoader, GLUETheme, SPTCollectionLogger, SPTCollectionPlatformDataLoader, SPTExplicitContentAccessManager, SPTGLUEImageLoaderFactory, SPTMetaViewController, SPTNavigationRouter, SPTPerformanceMetricsViewLoggerFactory, SPTPodcastLogger, SPTPodcastUIStringFormatter, SPTPodcastYourLibraryShowCellConfigurator;

@interface SPTPodcastYourLibraryShowsPageProvider : NSObject <SPTYourLibraryPageProvider>
{
    unsigned long long _groupIdentifier;
    unsigned long long _providerIdentifier;
    NSString *_title;
    NSURL *_URI;
    SPTPodcastYourLibraryShowsViewModel *_viewModel;
    id <GLUETheme> _theme;
    id <SPTPodcastYourLibraryShowCellConfigurator> _cellConfigurator;
    id <SPTPodcastLogger> _logger;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
    id <GLUEImageLoader> _imageLoader;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
}

@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(retain, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTPodcastLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastYourLibraryShowCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPodcastYourLibraryShowsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)pageViewControllerForContext:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (id)initWithURI:(id)arg1 title:(id)arg2 pageProviderIdentifier:(unsigned long long)arg3 dataLoader:(id)arg4 theme:(id)arg5 glueImageLoaderFactory:(id)arg6 logger:(id)arg7 explicitContentAccessManager:(id)arg8 collectionLogger:(id)arg9 metaViewController:(id)arg10 navigationRouter:(id)arg11 viewLoggerFactory:(id)arg12 stringFormatter:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

