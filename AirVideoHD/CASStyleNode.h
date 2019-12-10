//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CASDeviceSelector, CASStyleSelector, NSArray, NSMutableArray;

@interface CASStyleNode : NSObject
{
    NSMutableArray *_styleProperties;
    NSArray *_invocations;
    CASStyleSelector *_styleSelector;
    CASDeviceSelector *_deviceSelector;
}

@property(retain, nonatomic) CASDeviceSelector *deviceSelector; // @synthesize deviceSelector=_deviceSelector;
@property(retain, nonatomic) CASStyleSelector *styleSelector; // @synthesize styleSelector=_styleSelector;
@property(retain, nonatomic) NSArray *invocations; // @synthesize invocations=_invocations;
@property(readonly, nonatomic) NSArray *styleProperties; // @synthesize styleProperties=_styleProperties;
- (void).cxx_destruct;
- (void)addStyleProperty:(id)arg1;
- (id)init;

@end
