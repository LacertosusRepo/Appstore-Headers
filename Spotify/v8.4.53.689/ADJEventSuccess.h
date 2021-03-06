//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ADJEventSuccess : NSObject
{
    NSString *_message;
    NSString *_timeStamp;
    NSString *_adid;
    NSString *_eventToken;
    NSDictionary *_jsonResponse;
}

+ (id)eventSuccessResponseData;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

