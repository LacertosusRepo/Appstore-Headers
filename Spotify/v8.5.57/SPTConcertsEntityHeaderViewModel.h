//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSDateFormatter, NSString, SPTConcertsArtist, SPTConcertsArtistNameFormatter, SPTConcertsDateFormatter, SPTConcertsEntity, UIColor, UIImage;
@protocol GLUETheme, SPTConcertsEntityHeaderViewModelDelegate, SPTContainerUIService, SPTImageLoader, SPTImageLoaderRequest, SPTLinkDispatcher;

@interface SPTConcertsEntityHeaderViewModel : NSObject <GLUEThemeObserver, SPTImageLoaderDelegate>
{
    id <SPTConcertsEntityHeaderViewModelDelegate> _delegate;
    id <GLUETheme> _theme;
    UIImage *_primaryImage;
    SPTConcertsEntity *_entity;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTConcertsDateFormatter *_dateFormatterProvider;
    id <SPTImageLoader> _imageLoader;
    id <SPTImageLoaderRequest> _primaryImageLoadRequest;
    id <SPTContainerUIService> _containerUIService;
    SPTConcertsArtistNameFormatter *_nameFormatter;
    NSDateFormatter *_timeTextDateFormatter;
    NSDateFormatter *_dateTextDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateTextDateFormatter; // @synthesize dateTextDateFormatter=_dateTextDateFormatter;
@property(retain, nonatomic) NSDateFormatter *timeTextDateFormatter; // @synthesize timeTextDateFormatter=_timeTextDateFormatter;
@property(retain, nonatomic) SPTConcertsArtistNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(retain, nonatomic) id <SPTImageLoaderRequest> primaryImageLoadRequest; // @synthesize primaryImageLoadRequest=_primaryImageLoadRequest;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTConcertsEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) UIImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTConcertsEntityHeaderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeUpdated:(id)arg1;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)cancelAllLoads;
- (_Bool)shouldLoadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)attemptLoadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)loadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)updateUsingEntity:(id)arg1;
@property(readonly, copy, nonatomic) NSString *shareText;
- (void)showFindTicketsPage;
@property(readonly, copy, nonatomic) NSString *findTicketsText;
@property(readonly, nonatomic, getter=isFindTicketsButtonEnabled) _Bool findTicketsButtonEnabled;
@property(readonly, copy, nonatomic) NSString *ticketDetailsText;
@property(readonly, nonatomic) _Bool shouldShowTicketDetails;
@property(readonly, copy, nonatomic) NSString *timeText;
@property(readonly, copy, nonatomic) NSString *dateText;
@property(readonly, copy, nonatomic) NSString *venueText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, copy, nonatomic) NSString *dayText;
@property(readonly, copy, nonatomic) NSString *monthText;
@property(readonly, nonatomic) UIColor *primaryImageFallbackColor;
- (id)primaryImageFallbackOfSize:(struct CGSize)arg1;
- (void)setPrimaryImage:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SPTConcertsArtist *headliner;
- (void)dealloc;
- (id)initWithLinkDispatcher:(id)arg1 dateFormatterProvider:(id)arg2 imageLoader:(id)arg3 theme:(id)arg4 containerUIService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

