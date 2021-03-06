//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTInAppMessageServiceLogger;

@interface SPTInAppMessageTriggerListParser : NSObject
{
    SPTInAppMessageServiceLogger *_serviceLogger;
}

+ (id)formatToStringMap;
+ (id)typeToStringMap;
+ (Class)modelClass;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
- (void).cxx_destruct;
- (long long)triggerFormatFromString:(id)arg1;
- (long long)triggerTypeFromString:(id)arg1;
- (id)modelObjectFromJSONDictionary:(id)arg1 error:(out id *)arg2;
- (id)triggerModelObjectsFromJSONData:(id)arg1;
- (id)initWithServiceLogger:(id)arg1;

@end

