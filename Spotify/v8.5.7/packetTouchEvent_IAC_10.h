//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasePacket.h"

@class TouchList_IAC_10;

@interface packetTouchEvent_IAC_10 : BasePacket
{
    TouchList_IAC_10 *_touchEvents;
}

@property(retain) TouchList_IAC_10 *touchEvents; // @synthesize touchEvents=_touchEvents;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

