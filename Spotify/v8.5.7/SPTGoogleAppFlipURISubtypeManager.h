//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTNetworkConnectivityController;
@protocol SPTGoogleAppFlipAuthorizer, SPTGoogleAppFlipParameterValidator, SPTGoogleAppFlipURIManager, SPTURIDispatchService;

@interface SPTGoogleAppFlipURISubtypeManager : NSObject <SPTURISubtypeHandler>
{
    id <SPTURIDispatchService> _uriDispatchService;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTGoogleAppFlipParameterValidator> _validator;
    id <SPTGoogleAppFlipURIManager> _uriManager;
    id <SPTGoogleAppFlipAuthorizer> _authorizer;
}

@property(retain, nonatomic) id <SPTGoogleAppFlipAuthorizer> authorizer; // @synthesize authorizer=_authorizer;
@property(retain, nonatomic) id <SPTGoogleAppFlipURIManager> uriManager; // @synthesize uriManager=_uriManager;
@property(retain, nonatomic) id <SPTGoogleAppFlipParameterValidator> validator; // @synthesize validator=_validator;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)deregisterSubtypeHandler;
- (void)registerSubtypeHandler;
- (void)dealloc;
- (id)initWithURIDispatchService:(id)arg1 networkConnectivityController:(id)arg2 parameterValidator:(id)arg3 uriManager:(id)arg4 authorizer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

