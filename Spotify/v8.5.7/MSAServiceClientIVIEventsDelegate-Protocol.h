//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MSAServiceClientIVIEventsDelegate <NSObject>
- (void)receivedAudioStatus:(unsigned char)arg1 forType:(unsigned char)arg2 requestID:(unsigned int)arg3;
- (void)phoneCallStateDidChange:(unsigned char)arg1;
@end
