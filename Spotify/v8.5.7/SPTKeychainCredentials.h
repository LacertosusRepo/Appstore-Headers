//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class SPTSerializableCredentials;

@interface SPTKeychainCredentials : NSObject <NSCoding>
{
    SPTSerializableCredentials *_credentials;
}

@property(retain, nonatomic) SPTSerializableCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createLoginCredentials;
- (id)initWithCredentials:(id)arg1;

@end
