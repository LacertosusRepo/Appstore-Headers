//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GCKOCSession, NSData, NSString;

@interface GCKOCCreateSessionResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSenderIdentityPkcs12; // @dynamic hasSenderIdentityPkcs12;
@property(nonatomic) _Bool hasSenderIdentityPkcs12Password; // @dynamic hasSenderIdentityPkcs12Password;
@property(nonatomic) _Bool hasSession; // @dynamic hasSession;
@property(copy, nonatomic) NSData *senderIdentityPkcs12; // @dynamic senderIdentityPkcs12;
@property(copy, nonatomic) NSString *senderIdentityPkcs12Password; // @dynamic senderIdentityPkcs12Password;
@property(retain, nonatomic) GCKOCSession *session; // @dynamic session;

@end

