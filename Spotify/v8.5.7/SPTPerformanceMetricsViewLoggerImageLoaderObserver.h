//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderInstrumentationObserver-Protocol.h"

@class NSString;
@protocol SPTViewLogger;

@interface SPTPerformanceMetricsViewLoggerImageLoaderObserver : NSObject <SPTImageLoaderInstrumentationObserver>
{
    id <SPTViewLogger> _viewLogger;
}

@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didFinishLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didBeginLoadingImageWithURI:(id)arg2;
- (id)initWithViewLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

