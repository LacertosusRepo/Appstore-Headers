//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMConversionInitResponse : NSObject
{
    NSString *targetItemId;
    NSString *targetFileName;
    long long managerStateVersion;
}

+ (id)deJSONize:(id)arg1;
@property(nonatomic) long long managerStateVersion; // @synthesize managerStateVersion;
@property(retain, nonatomic) NSString *targetFileName; // @synthesize targetFileName;
@property(retain, nonatomic) NSString *targetItemId; // @synthesize targetItemId;
- (void).cxx_destruct;

@end

