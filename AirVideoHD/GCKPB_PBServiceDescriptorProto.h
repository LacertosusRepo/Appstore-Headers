//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBMutableArray, GCKPB_PBServiceOptions, NSString;

@interface GCKPB_PBServiceDescriptorProto : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMethodArray; // @dynamic hasMethodArray;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasStreamArray; // @dynamic hasStreamArray;
@property(retain, nonatomic) GCKPB_PBMutableArray *methodArray; // @dynamic methodArray;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GCKPB_PBServiceOptions *options; // @dynamic options;
@property(retain, nonatomic) GCKPB_PBMutableArray *streamArray; // @dynamic streamArray;

@end
