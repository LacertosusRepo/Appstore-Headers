//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"
#import "SPTStorylinesAttributionLoaderDelegate-Protocol.h"

@class NSCache, NSString, SPTStorylinesAttributionLoader, SPTStorylinesLogger;
@protocol SPTLinkDispatcher, SPTPageRegistry, SPTStorylinesAttributionViewModelDelegate;

@interface SPTStorylinesAttributionViewModel : NSObject <SPTStorylinesAttributionLoaderDelegate, FollowModelObserver>
{
    id <SPTStorylinesAttributionViewModelDelegate> _delegate;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPageRegistry> _pageRegistry;
    SPTStorylinesAttributionLoader *_attributionLoader;
    SPTStorylinesLogger *_logger;
    NSCache *_followModelCache;
}

@property(retain, nonatomic) NSCache *followModelCache; // @synthesize followModelCache=_followModelCache;
@property(retain, nonatomic) SPTStorylinesLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTStorylinesAttributionLoader *attributionLoader; // @synthesize attributionLoader=_attributionLoader;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTStorylinesAttributionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)didLoadFollowModel:(id)arg1;
- (void)didLoadAvatarImage:(id)arg1 forArtist:(id)arg2;
- (void)setTextForFollowState:(id)arg1;
- (void)fetchFollowModelForStorylines:(id)arg1;
- (void)fetchAvatarArtistImageForStorylines:(id)arg1;
- (void)resetAttributionForStorylines:(id)arg1;
- (void)toggleFollowForTrack:(id)arg1 currentCardIndex:(unsigned long long)arg2;
- (void)navigateToPageForStorylines:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1 pageRegistry:(id)arg2 attributionLoader:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

