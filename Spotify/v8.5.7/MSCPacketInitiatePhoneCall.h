//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSCBasePacket.h"

@class NSString;

@interface MSCPacketInitiatePhoneCall : MSCBasePacket
{
    NSString *_displayName;
    NSString *_number;
}

@property(retain) NSString *number; // @synthesize number=_number;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end

