//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMServerAddress, NSMutableData;

@interface IMServerVerificationConnection : NSObject
{
    IMServerAddress *address;
    NSMutableData *receivedData;
}

@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData;
@property(retain, nonatomic) IMServerAddress *address; // @synthesize address;
- (void).cxx_destruct;

@end

