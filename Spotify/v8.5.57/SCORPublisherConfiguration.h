//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCORClientConfiguration.h"

@class NSString;

@interface SCORPublisherConfiguration : SCORClientConfiguration
{
    shared_ptr_70a56b18 _deviceIdListener;
}

+ (id)publisherConfigurationWithBuilderBlock:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *publisherId;
- (id)initWithBuilder:(id)arg1;
- (id)initWithCppClientConfiguration:(shared_ptr_3f1925d0)arg1 listener:(shared_ptr_70a56b18)arg2;

@end

