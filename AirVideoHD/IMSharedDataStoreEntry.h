//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface IMSharedDataStoreEntry : NSObject
{
    int type;
    int dataVersion;
    NSString *connectionId;
    NSString *userId;
    NSString *clientId;
    unsigned long long timestamp;
    NSString *itemId;
    NSString *stringData;
    NSData *binaryData;
    NSArray *typesToRemove;
}

+ (id)deJSONize:(id)arg1;
@property(retain, nonatomic) NSArray *typesToRemove; // @synthesize typesToRemove;
@property(retain, nonatomic) NSData *binaryData; // @synthesize binaryData;
@property(retain, nonatomic) NSString *stringData; // @synthesize stringData;
@property(nonatomic) int dataVersion; // @synthesize dataVersion;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
@property(retain, nonatomic) NSString *connectionId; // @synthesize connectionId;
- (void).cxx_destruct;
- (id)JSONize;
@property(retain, nonatomic) NSDate *timestampAsDate;
- (id)description;

@end
