//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContributingArtistsUIProvider-Protocol.h"

@class NSArray, NSString;
@protocol GLUETheme, SPTGLUEImageLoaderFactory, SPTLinkDispatcher, SPTLogCenter;

@interface SPTContributingArtistsUIProviderImplementation : NSObject <SPTContributingArtistsUIProvider>
{
    NSArray *_artistsEntities;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTGLUEImageLoaderFactory> _glueImageLoaderFactory;
    id <SPTLogCenter> _logCenter;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> glueImageLoaderFactory; // @synthesize glueImageLoaderFactory=_glueImageLoaderFactory;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSArray *artistsEntities; // @synthesize artistsEntities=_artistsEntities;
- (void).cxx_destruct;
- (id)provideContributingArtistsListViewController;
- (id)initWithArtistEntities:(id)arg1 linkDispatcher:(id)arg2 glueImageLoaderFactory:(id)arg3 logCenter:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

