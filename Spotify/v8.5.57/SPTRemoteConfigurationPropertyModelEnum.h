//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTRemoteConfigurationPropertyModel.h"

@class NSArray, NSString;

@interface SPTRemoteConfigurationPropertyModelEnum : SPTRemoteConfigurationPropertyModel
{
    NSArray *_values;
    NSString *_value;
    NSString *_defaultValue;
}

@property(readonly, copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)copyModelWithValue:(id)arg1;
- (id)initWithName:(id)arg1 componentId:(id)arg2 values:(id)arg3 value:(id)arg4 defaultValue:(id)arg5;

@end

