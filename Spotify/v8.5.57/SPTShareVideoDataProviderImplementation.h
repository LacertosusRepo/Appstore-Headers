//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareVideoDataProvider-Protocol.h"

@class NSString;
@protocol SPTCanvasVideoLoader, SPTCanvasVideoLoaderFactory;

@interface SPTShareVideoDataProviderImplementation : NSObject <SPTShareVideoDataProvider>
{
    id <SPTCanvasVideoLoaderFactory> _canvasVideoLoaderFactory;
    id <SPTCanvasVideoLoader> _canvasVideoLoader;
}

@property(retain, nonatomic) id <SPTCanvasVideoLoader> canvasVideoLoader; // @synthesize canvasVideoLoader=_canvasVideoLoader;
@property(readonly, nonatomic) id <SPTCanvasVideoLoaderFactory> canvasVideoLoaderFactory; // @synthesize canvasVideoLoaderFactory=_canvasVideoLoaderFactory;
- (void).cxx_destruct;
- (void)provideVideoDataForEntityURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCanvasVideoLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
