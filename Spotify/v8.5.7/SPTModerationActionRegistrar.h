//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTModerationLegacyReportAbuseManager, SPTModerationReportActionFactory;
@protocol SPContextMenuActionsFactory;

@interface SPTModerationActionRegistrar : NSObject
{
    SPTModerationReportActionFactory *_reportActionFactory;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    SPTModerationLegacyReportAbuseManager *_legacyReportAbuseManager;
}

@property(readonly, nonatomic) SPTModerationLegacyReportAbuseManager *legacyReportAbuseManager; // @synthesize legacyReportAbuseManager=_legacyReportAbuseManager;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(readonly, nonatomic) SPTModerationReportActionFactory *reportActionFactory; // @synthesize reportActionFactory=_reportActionFactory;
- (void).cxx_destruct;
- (void)registerReportAction;
- (void)registerLegacyReportAbuseAction;
- (id)initWithReportActionFactory:(id)arg1 contextMenuActionsFactory:(id)arg2 legacyReportAbuseManager:(id)arg3;

@end

