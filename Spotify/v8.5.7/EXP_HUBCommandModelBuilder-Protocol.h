//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBJSONCompatibleBuilder-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol EXP_HUBCommandModel;

@protocol EXP_HUBCommandModelBuilder <EXP_HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *data;
@property(copy, nonatomic) NSString *name;
- (id <EXP_HUBCommandModel>)build;
@end

