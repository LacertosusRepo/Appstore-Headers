//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeHandler-Protocol.h"

@class NSString;
@protocol SPTAdsBaseCosmosBridge;

@interface SPTAdLinkHandler : NSObject <SPTURISubtypeHandler>
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
}

@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)requestPreview:(id)arg1;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithCosmosBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

