//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSStream;

@protocol SPTVoiceLibraryOutputStreamDelegate <NSObject>
- (void)didEncounterEndOfOutputStream;
- (void)outputStream:(NSStream *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (void)outputStream:(NSStream *)arg1 didWriteDataChunkWithLength:(unsigned long long)arg2;
@end

