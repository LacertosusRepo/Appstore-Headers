//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTInAppMessageServiceLogger;

@interface SPTInAppMessageTriggerListParser : NSObject
{
    SPTInAppMessageServiceLogger *_serviceLogger;
}

+ (Class)modelClass;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
- (void).cxx_destruct;
- (id)modelObjectFromJSONDictionary:(id)arg1 error:(out id *)arg2;
- (void)triggerModelObjectsFromJSONData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServiceLogger:(id)arg1;

@end

