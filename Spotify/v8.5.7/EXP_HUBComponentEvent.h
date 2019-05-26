//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventFactoryModelMapping-Protocol.h"

@class NSDictionary, NSString;
@protocol EXP_HUBComponentModel;

@interface EXP_HUBComponentEvent : NSObject <SPTEventFactoryModelMapping>
{
    NSString *_name;
    id <EXP_HUBComponentModel> _componentModel;
    NSDictionary *_data;
}

@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) id <EXP_HUBComponentModel> componentModel; // @synthesize componentModel=_componentModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 componentModel:(id)arg2;
- (id)initWithName:(id)arg1 componentModel:(id)arg2 data:(id)arg3;
- (id)eventComponents;
- (id)interactionType;
- (id)specificationId;
- (long long)spt_hubLoggingDataItemIndex;
- (id)spt_interaction5LogMessageWithUserIntent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

