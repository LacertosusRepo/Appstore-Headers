//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCBasePacket.h"

@class MSCFrameProperties, MSCVersion, NSArray, NSDictionary, NSString;

@interface MSCPacketInit : MSCBasePacket
{
    unsigned char _navToAppsAvailable;
    unsigned short _screenWidth;
    unsigned short _screenHeight;
    unsigned short _physicalScreenWidth;
    unsigned short _physicalScreenHeight;
    unsigned short _focusControlCapabilities;
    unsigned int _capabilities;
    unsigned int _supportedCompressions;
    NSString *_name;
    MSCFrameProperties *_frameProperties;
    MSCVersion *_serviceSdkVersion;
    NSString *_navToTarget;
    NSArray *_allowedVehicleDataKeys;
    NSString *_frameOverlayText;
    MSCVersion *_iviProtocolVersion;
    NSDictionary *_iviVersions;
}

@property unsigned short focusControlCapabilities; // @synthesize focusControlCapabilities=_focusControlCapabilities;
@property(retain) NSDictionary *iviVersions; // @synthesize iviVersions=_iviVersions;
@property(retain) MSCVersion *iviProtocolVersion; // @synthesize iviProtocolVersion=_iviProtocolVersion;
@property(retain) NSString *frameOverlayText; // @synthesize frameOverlayText=_frameOverlayText;
@property(retain) NSArray *allowedVehicleDataKeys; // @synthesize allowedVehicleDataKeys=_allowedVehicleDataKeys;
@property unsigned char navToAppsAvailable; // @synthesize navToAppsAvailable=_navToAppsAvailable;
@property(retain) NSString *navToTarget; // @synthesize navToTarget=_navToTarget;
@property(retain) MSCVersion *serviceSdkVersion; // @synthesize serviceSdkVersion=_serviceSdkVersion;
@property unsigned int supportedCompressions; // @synthesize supportedCompressions=_supportedCompressions;
@property(retain) MSCFrameProperties *frameProperties; // @synthesize frameProperties=_frameProperties;
@property unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property unsigned short physicalScreenHeight; // @synthesize physicalScreenHeight=_physicalScreenHeight;
@property unsigned short physicalScreenWidth; // @synthesize physicalScreenWidth=_physicalScreenWidth;
@property unsigned short screenHeight; // @synthesize screenHeight=_screenHeight;
@property unsigned short screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

