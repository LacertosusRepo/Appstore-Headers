//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoader;

@interface SPTReportContentReporter : NSObject
{
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)temporarilyShowConfirmationView;
- (void)reportTrackURI:(id)arg1 contextURI:(id)arg2;
- (id)initWithDataLoaderFactory:(id)arg1;

@end

