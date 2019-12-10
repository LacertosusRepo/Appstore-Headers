//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMServerAddress, NSString;

@interface IMConnectionConfiguration : NSObject
{
    _Bool multiUserMode;
    int connectionType;
    int operatingSystem;
    int bonjourStatus;
    int remoteStatus;
    NSString *displayName;
    NSString *serverPin;
    NSString *connectionId;
    NSString *remoteId;
    IMServerAddress *customAddress;
    IMServerAddress *cachedAddress;
    NSString *certificateHash;
    NSString *addressesHash;
}

+ (id)fromDictionary:(id)arg1;
@property(retain) NSString *addressesHash; // @synthesize addressesHash;
@property _Bool multiUserMode; // @synthesize multiUserMode;
@property(retain) NSString *certificateHash; // @synthesize certificateHash;
@property(retain) IMServerAddress *cachedAddress; // @synthesize cachedAddress;
@property int remoteStatus; // @synthesize remoteStatus;
@property int bonjourStatus; // @synthesize bonjourStatus;
@property(retain) IMServerAddress *customAddress; // @synthesize customAddress;
@property int operatingSystem; // @synthesize operatingSystem;
@property int connectionType; // @synthesize connectionType;
@property(retain) NSString *remoteId; // @synthesize remoteId;
@property(retain) NSString *connectionId; // @synthesize connectionId;
@property(retain) NSString *serverPin; // @synthesize serverPin;
@property(retain) NSString *displayName; // @synthesize displayName;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)doInit;
- (void)dealloc;
@property(readonly) NSString *certificateHash2;
- (id)init;
- (void)background;

@end
