//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTShareHandler-Protocol.h"

@class NSString, SPTDataLoader, SPTShareData, SPTShareLogger;
@protocol SPTShareDeeplinkHandler;

@interface SPTShareSnapchatShareHandler : NSObject <SPTShareHandler, SPTDataLoaderDelegate>
{
    _Bool _isRequesting;
    NSString *_utmSource;
    NSString *_utmMedium;
    NSString *_utmCampaign;
    NSString *_utmContent;
    NSString *_utmTerm;
    SPTShareLogger *_shareLogger;
    SPTDataLoader *_dataLoader;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    SPTShareData *_shareData;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(readonly, nonatomic) NSString *utmTerm; // @synthesize utmTerm=_utmTerm;
@property(readonly, nonatomic) NSString *utmContent; // @synthesize utmContent=_utmContent;
@property(readonly, nonatomic) NSString *utmCampaign; // @synthesize utmCampaign=_utmCampaign;
@property(readonly, nonatomic) NSString *utmMedium; // @synthesize utmMedium=_utmMedium;
@property(readonly, copy, nonatomic) NSString *utmSource; // @synthesize utmSource=_utmSource;
- (void).cxx_destruct;
- (id)createAlertModel;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)downloadArtworkForEntityURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareEntityWithURL:(id)arg1 backgroundImage:(id)arg2;
- (id)generateImageFromData:(id)arg1;
- (id)provideShareAlertModelForError:(id)arg1;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 deeplinkHandler:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithShareLogger:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

