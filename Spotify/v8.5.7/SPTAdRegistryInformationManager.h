//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString, UIButton;
@protocol GLUEImageLoader, SPTAdsBaseEntity, SPTAdsBaseRegistry, SPTContainerUIService, SPTLinkDispatcher;

@interface SPTAdRegistryInformationManager : NSObject <SPTAdsBaseRegistryObserver>
{
    _Bool _queueButtonVisible;
    id <SPTAdsBaseRegistry> _registry;
    id <SPTContainerUIService> _containerUIService;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdsBaseEntity> _currentEntity;
    UIButton *_logAdButton;
}

@property(nonatomic, getter=isQueueButtonVisible) _Bool queueButtonVisible; // @synthesize queueButtonVisible=_queueButtonVisible;
@property(retain, nonatomic) UIButton *logAdButton; // @synthesize logAdButton=_logAdButton;
@property(nonatomic) __weak id <SPTAdsBaseEntity> currentEntity; // @synthesize currentEntity=_currentEntity;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) __weak id <SPTAdsBaseRegistry> registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (id)windowToPresentFrom;
- (void)didTapInformationButton;
- (void)hideInformationButton;
- (void)showInformationAfterDelay;
- (void)showInformationButton;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)toggleManager;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 containerService:(id)arg2 glueImageLoader:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

