//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTSpeakerCompanionLogger, SPTSpeakerCompanionResultsPageModel;
@protocol SPTLocalSettings, SPTSpeakerCompanionPageBannerViewModelDelegate, SPTSpeakerCompanionPageBannerViewModelPresentationDelegate;

@interface SPTSpeakerCompanionPageBannerViewModel : NSObject
{
    id <SPTSpeakerCompanionPageBannerViewModelDelegate> _delegate;
    id <SPTSpeakerCompanionPageBannerViewModelPresentationDelegate> _presentationDelegate;
    SPTSpeakerCompanionResultsPageModel *_fulfilledEntity;
    SPTSpeakerCompanionLogger *_logger;
    NSString *_requestId;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) SPTSpeakerCompanionLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTSpeakerCompanionResultsPageModel *fulfilledEntity; // @synthesize fulfilledEntity=_fulfilledEntity;
@property(nonatomic) __weak id <SPTSpeakerCompanionPageBannerViewModelPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <SPTSpeakerCompanionPageBannerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bannerBeingPresented;
- (void)trackDismissBannerCount;
- (void)logDismissBannerAction;
- (void)showMoreResults;
- (void)updateViewModelWithData:(id)arg1;
- (id)initWithLogger:(id)arg1 localSettings:(id)arg2;

@end

