//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@class NSString;

@interface IDMapServiceOverlayHighlightLocationOperation : IDMapServiceOverlayAsyncBaseOperation
{
    NSString *_locationIdentifier;
}

@property(readonly) NSString *locationIdentifier; // @synthesize locationIdentifier=_locationIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 locationIdentifier:(id)arg3;

@end
