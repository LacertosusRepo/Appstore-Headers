//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface GPBAny : GPBMessage
{
}

+ (id)descriptor;
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
+ (id)anyWithMessage:(id)arg1 error:(id *)arg2;
- (id)unpackMessageClass:(Class)arg1 error:(id *)arg2;
- (_Bool)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (_Bool)packWithMessage:(id)arg1 error:(id *)arg2;
- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (id)initWithMessage:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *typeURL; // @dynamic typeURL;
@property(copy, nonatomic) NSData *value; // @dynamic value;

@end
