//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTCollectionConfigurationResponderProvider.h"
#import "YTNavigationalLatencyProtocol.h"
#import "YTPageStyling.h"
#import "YTResponseViewController.h"
#import "YTStyleContextResponderProvider.h"

@class GIMMe, NSError, NSString, UIColor, UIViewController<YTResponseViewController>, YTISearchResponse, YTMonotonicDate, YTNavigationalLatencyEventInfo, YTSearchLatencyCache;

@interface YTSearchResponseViewController : UIViewController <YTPageStyling, YTStyleContextResponderProvider, YTCollectionConfigurationResponderProvider, YTResponseViewController, YTNavigationalLatencyProtocol>
{
    YTISearchResponse *_renderer;
    id <YTServices> _services;
    id <YTInnerTubeUIService> _service;
    NSError *_error;
    YTSearchLatencyCache *_searchLatencyCache;
    UIColor *_themeColor;
    UIColor *_titleColor;
    id <YTResponder> _parentResponder;
    YTNavigationalLatencyEventInfo *_navigationalLatencyEventInfo;
    GIMMe *_gimme;
    UIViewController<YTResponseViewController> *_contentViewController;
    YTMonotonicDate *_requestSentDate;
}

@property(retain, nonatomic) YTMonotonicDate *requestSentDate; // @synthesize requestSentDate=_requestSentDate;
@property(retain, nonatomic) UIViewController<YTResponseViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTNavigationalLatencyEventInfo *navigationalLatencyEventInfo; // @synthesize navigationalLatencyEventInfo=_navigationalLatencyEventInfo;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)reportNavigationLatencyTimingWithIntentDate:(id)arg1 packagingEventDate:(id)arg2 requestSentDate:(id)arg3 responseReceivedDate:(id)arg4 responseParsedDate:(id)arg5 clientScreenNonce:(id)arg6;
- (_Bool)islatencyDateOrderValidWithIntentDate:(id)arg1 packagingEventDate:(id)arg2 navDate:(id)arg3 requestSentDate:(id)arg4 responseReceivedDate:(id)arg5 responseParsedDate:(id)arg6;
- (void)assertEventDatesValidityWithIntentDate:(id)arg1 packagingEventDate:(id)arg2 navDate:(id)arg3 requestSentDate:(id)arg4 responseReceivedDate:(id)arg5 responseParsedDate:(id)arg6;
- (void)loadDefaultContent;
- (void)updateThemeColorAnimated:(_Bool)arg1;
- (id)elementsConfiguration;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
@property(readonly, nonatomic) NSString *styleContext;
- (void)willMakeRequest:(id)arg1;
- (void)setEmptyMessage:(id)arg1;
- (void)loadWithError:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)unloadModel;
- (void)loadWithModel:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (_Bool)useSectionListRenderer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

