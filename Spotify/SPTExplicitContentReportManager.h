//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoader;

@interface SPTExplicitContentReportManager : NSObject
{
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)temporarilyShowConfirmationView;
- (void)reportTrackURI:(id)arg1 contextURI:(id)arg2;
- (id)initWithDataLoader:(id)arg1;

@end

