//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRemoteCallback-Protocol.h"
#import "SPTImageLoaderRequest-Protocol.h"

@class NSDate, NSString, NSURL;
@protocol SPTImageLoaderRemote, SPTImageLoaderRemoteCallback, SPTImageLoaderRequest, SPTImageLoaderRequestDelegate, SPTProductState;

@interface SPTSpotifyImageRequestImplementation : NSObject <SPTImageLoaderRemoteCallback, SPTImageLoaderRequest>
{
    _Bool _allowUpscaling;
    _Bool _preventInMemoryCaching;
    _Bool _preventPersistentCaching;
    _Bool _cancelled;
    NSURL *_URL;
    NSDate *_creationDate;
    id <SPTImageLoaderRemoteCallback> _callback;
    id _context;
    NSString *_persistenceKey;
    id <SPTImageLoaderRequestDelegate> _delegate;
    id <SPTImageLoaderRemote> _remoteImageLoader;
    NSString *_sourceIdentifier;
    id <SPTProductState> _productState;
    id <SPTImageLoaderRequest> _request;
    struct CGSize _requestedSize;
    struct CGSize _downloadSize;
}

@property(retain, nonatomic) id <SPTImageLoaderRequest> request; // @synthesize request=_request;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) struct CGSize downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) __weak id <SPTImageLoaderRemote> remoteImageLoader; // @synthesize remoteImageLoader=_remoteImageLoader;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool preventPersistentCaching; // @synthesize preventPersistentCaching=_preventPersistentCaching;
@property(readonly, nonatomic) _Bool preventInMemoryCaching; // @synthesize preventInMemoryCaching=_preventInMemoryCaching;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <SPTImageLoaderRemoteCallback> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
- (void).cxx_destruct;
- (void)imageLoaded:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (void)imageLoadError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)imageLoaded:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (id)convertURLToHTTP:(id)arg1 downloadSize:(struct CGSize)arg2;
- (id)initWithRemoteImageLoader:(id)arg1 URL:(id)arg2 sourceIdentifier:(id)arg3 requestedSize:(struct CGSize)arg4 context:(id)arg5 downloadSize:(struct CGSize)arg6 productState:(id)arg7 delegate:(id)arg8 callback:(id)arg9;
- (void)cancel;
- (void)load;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

