//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@interface IDMapServiceOverlayInitializeOperation : IDMapServiceOverlayAsyncBaseOperation
{
    double _timeout;
}

@property(readonly) double timeout; // @synthesize timeout=_timeout;
- (id)description;
- (void)handleMapServiceEvent:(unsigned long long)arg1 transferId:(long long)arg2;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 timeout:(double)arg3;

@end

