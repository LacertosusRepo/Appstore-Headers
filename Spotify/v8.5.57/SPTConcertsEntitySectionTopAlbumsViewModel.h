//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntitySectionViewModel-Protocol.h"

@class NSArray, NSString, SPTConcertsEntityAlbumRowViewModel, SPTConcertsLogger;
@protocol GLUEImageLoader, SPTLinkDispatcher;

@interface SPTConcertsEntitySectionTopAlbumsViewModel : NSObject <SPTConcertsEntitySectionViewModel>
{
    NSString *_titleText;
    NSArray *_topAlbums;
    SPTConcertsEntityAlbumRowViewModel *_albumRowViewModel;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <GLUEImageLoader> _glueImageLoader;
    SPTConcertsLogger *_logger;
}

@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTConcertsEntityAlbumRowViewModel *albumRowViewModel; // @synthesize albumRowViewModel=_albumRowViewModel;
@property(retain, nonatomic) NSArray *topAlbums; // @synthesize topAlbums=_topAlbums;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)provideAlbumCarouselViewModel;
- (id)viewModelForRow:(long long)arg1;
@property(readonly, nonatomic) _Bool nestedRows;
@property(readonly, nonatomic) long long rows;
- (id)initWithTopAlbums:(id)arg1 linkDispatcher:(id)arg2 glueImageLoader:(id)arg3 concertsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

