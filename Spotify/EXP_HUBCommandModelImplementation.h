//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBAutoEquatable.h"

#import "EXP_HUBCommandModel.h"

@class NSDictionary, NSString;

@interface EXP_HUBCommandModelImplementation : EXP_HUBAutoEquatable <EXP_HUBCommandModel>
{
    NSString *_name;
    NSDictionary *_data;
}

@property(readonly, copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithName:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

