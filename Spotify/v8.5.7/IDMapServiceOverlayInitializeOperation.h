//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@interface IDMapServiceOverlayInitializeOperation : IDMapServiceOverlayAsyncBaseOperation
{
    double _timeout;
}

@property(readonly) double timeout; // @synthesize timeout=_timeout;
- (id)description;
- (void)handleMapServiceEvent:(id)arg1 transferId:(long long)arg2;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 timeout:(double)arg3;

@end

