//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTImageLoaderRequest-Protocol.h"
#import "SPTScannablesDataSourceDelegate-Protocol.h"

@class NSDate, NSString, NSURL, UIImage;
@protocol SPTImageLoader, SPTImageLoaderRemoteCallback, SPTImageLoaderRequestDelegate, SPTScannable, SPTScannablesDataSource;

@interface SPTScannablesImageLoaderRequest : NSObject <SPTImageLoaderDelegate, SPTScannablesDataSourceDelegate, SPTImageLoaderRequest>
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
    id <SPTScannable> _scannable;
    UIImage *_entityImage;
    id <SPTImageLoader> _imageLoader;
    id <SPTScannablesDataSource> _dataSource;
    struct CGSize _requestedSize;
}

@property(retain, nonatomic) id <SPTScannablesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) UIImage *entityImage; // @synthesize entityImage=_entityImage;
@property(retain, nonatomic) id <SPTScannable> scannable; // @synthesize scannable=_scannable;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
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
- (void)processImage;
- (void)scannablesDataSource:(id)arg1 didFinishFetchingScannable:(id)arg2;
- (void)scannablesDataSource:(id)arg1 didFailFetchingScannableWithError:(id)arg2;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)cancel;
- (void)load;
- (id)initWithURL:(id)arg1 imageLoader:(id)arg2 scannablesDataSource:(id)arg3 requestedSize:(struct CGSize)arg4 allowsUpscaling:(_Bool)arg5 context:(id)arg6 callback:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

