//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTReportContentReporter;

@interface SPTReportContentAction : SPAction
{
    SPTReportContentReporter *_reporter;
    NSURL *_trackURI;
    NSURL *_contextURI;
}

@property(readonly, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(readonly, nonatomic) SPTReportContentReporter *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithReporter:(id)arg1 trackURI:(id)arg2 contextURI:(id)arg3 logContext:(id)arg4;

@end
