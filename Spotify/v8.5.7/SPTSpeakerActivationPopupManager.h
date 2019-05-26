//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTSpeakerActivationAccountLinkingPopupManagerDelegate-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTPopupDialog, SPTSpeakerActivationAccountLinkingPopupManager, SPTSpeakerActivationLogger, SPTSpeakerActivationTestManager;
@protocol GLUEImageLoader, SPTGaiaConnectAPI, SPTLinkDispatcher, SPTLocalSettings;

@interface SPTSpeakerActivationPopupManager : NSObject <SPTGaiaConnectObserver, SPTSpeakerActivationAccountLinkingPopupManagerDelegate>
{
    NSString *_sourceIdentifier;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTSpeakerActivationLogger *_logger;
    SPTSpeakerActivationTestManager *_testManager;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLocalSettings> _localSettings;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTGaiaConnectAPI> _connectManager;
    SPTPopupDialog *_currentDialog;
    SPTSpeakerActivationAccountLinkingPopupManager *_accountLinkingPopupManager;
}

@property(retain, nonatomic) SPTSpeakerActivationAccountLinkingPopupManager *accountLinkingPopupManager; // @synthesize accountLinkingPopupManager=_accountLinkingPopupManager;
@property(retain, nonatomic) SPTPopupDialog *currentDialog; // @synthesize currentDialog=_currentDialog;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTSpeakerActivationTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTSpeakerActivationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void).cxx_destruct;
- (void)dismissDialog:(id)arg1;
- (_Bool)isGoogleSpeaker:(unsigned long long)arg1;
- (_Bool)shouldShowDialogForDevice:(id)arg1 eligible:(_Bool)arg2 hasShown:(_Bool)arg3;
- (_Bool)shouldShowAccountLinkingPopupForDevice:(id)arg1;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)accountLinkingPopUpWillDismissPopup:(id)arg1;
- (void)dealloc;
- (id)initWithSourceIdentifier:(id)arg1 dataLoaderFactory:(id)arg2 logger:(id)arg3 testManager:(id)arg4 connectManager:(id)arg5 glueImageLoader:(id)arg6 linkDispatcher:(id)arg7 localSettings:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
