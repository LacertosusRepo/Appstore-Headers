//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

@interface GCKPB_NlpRepairStatus : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int enabled; // @dynamic enabled;
@property(nonatomic) int flags; // @dynamic flags;
@property(nonatomic) _Bool foundTestKeys; // @dynamic foundTestKeys;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasFlags; // @dynamic hasFlags;
@property(nonatomic) _Bool hasFoundTestKeys; // @dynamic hasFoundTestKeys;
@property(nonatomic) _Bool hasHoldoffAfterInstall; // @dynamic hasHoldoffAfterInstall;
@property(nonatomic) _Bool hasHoldoffUntilBoot; // @dynamic hasHoldoffUntilBoot;
@property(nonatomic) _Bool hasHoldoffUntilWipe; // @dynamic hasHoldoffUntilWipe;
@property(nonatomic) _Bool hasRepairStatus; // @dynamic hasRepairStatus;
@property(nonatomic) _Bool hasSignatureHash; // @dynamic hasSignatureHash;
@property(nonatomic) _Bool hasVersionCode; // @dynamic hasVersionCode;
@property(nonatomic) _Bool holdoffAfterInstall; // @dynamic holdoffAfterInstall;
@property(nonatomic) _Bool holdoffUntilBoot; // @dynamic holdoffUntilBoot;
@property(nonatomic) _Bool holdoffUntilWipe; // @dynamic holdoffUntilWipe;
@property(nonatomic) int repairStatus; // @dynamic repairStatus;
@property(retain, nonatomic) NSString *signatureHash; // @dynamic signatureHash;
@property(nonatomic) int versionCode; // @dynamic versionCode;

@end

