//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRequest-Protocol.h"

@class NSDate, NSString, NSURL;
@protocol SPTImageLoaderRemoteCallback, SPTImageLoaderRequestDelegate;

@interface SPTLocalIPodLibraryImageLoaderRequest : NSObject <SPTImageLoaderRequest>
{
    _Bool _allowUpscaling;
    _Bool _cancelled;
    NSString *persistenceKey;
    id <SPTImageLoaderRequestDelegate> _delegate;
    NSURL *_URL;
    NSDate *_creationDate;
    id _context;
    id <SPTImageLoaderRemoteCallback> _callback;
    struct CGSize _requestedSize;
}

@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
@property(nonatomic) __weak id <SPTImageLoaderRemoteCallback> callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey;
- (void).cxx_destruct;
- (void)dispatchSuccess:(id)arg1;
- (void)dispatchError:(id)arg1;
- (void)load;
@property(readonly, nonatomic) _Bool preventPersistentCaching;
@property(readonly, nonatomic) _Bool preventInMemoryCaching;
- (void)cancel;
- (id)initWithURL:(id)arg1 requestedSize:(struct CGSize)arg2 callback:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

