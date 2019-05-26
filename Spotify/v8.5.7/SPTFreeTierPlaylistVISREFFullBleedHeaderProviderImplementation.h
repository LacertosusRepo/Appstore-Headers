//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHeaderProvider-Protocol.h"

@class NSString, SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation, VISREFIntegrationManager;
@protocol GLUETheme, SPTImageLoader;

@interface SPTFreeTierPlaylistVISREFFullBleedHeaderProviderImplementation : NSObject <SPTFreeTierPlaylistHeaderProvider>
{
    id <GLUETheme> _theme;
    id <SPTImageLoader> _imageLoader;
    VISREFIntegrationManager *_visrefIntegrationManager;
    SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation *_visrefHeaderController;
}

@property(retain, nonatomic) SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation *visrefHeaderController; // @synthesize visrefHeaderController=_visrefHeaderController;
@property(retain, nonatomic) VISREFIntegrationManager *visrefIntegrationManager; // @synthesize visrefIntegrationManager=_visrefIntegrationManager;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool drawDropShadow;
@property(readonly, nonatomic) _Bool drawBottomLineLayer;
- (id)provideHeader;
- (void)configureBarButtonManagerDelegate:(id)arg1;
- (void)configureWithPlayViewModel:(id)arg1 followViewModel:(id)arg2 defaultHeaderViewModel:(id)arg3 fullbleedHeaderViewModel:(id)arg4 filterSortBarView:(id)arg5;
- (void)setupVISREFHeaderController;
- (id)initWithTheme:(id)arg1 imageLoader:(id)arg2 visrefIntegrationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
