//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSCBasePacket.h"

@interface MSCPacketSetFrameSize : MSCBasePacket
{
    unsigned short _screenWidth;
    unsigned short _screenHeight;
    unsigned short _physicalScreenWidth;
    unsigned short _physicalScreenHeight;
}

@property unsigned short physicalScreenHeight; // @synthesize physicalScreenHeight=_physicalScreenHeight;
@property unsigned short physicalScreenWidth; // @synthesize physicalScreenWidth=_physicalScreenWidth;
@property unsigned short screenHeight; // @synthesize screenHeight=_screenHeight;
@property unsigned short screenWidth; // @synthesize screenWidth=_screenWidth;

@end

