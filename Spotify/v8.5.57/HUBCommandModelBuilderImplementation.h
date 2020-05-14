//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandModelBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HUBCommandModelBuilderImplementation : NSObject <HUBCommandModelBuilder, NSCopying>
{
    NSString *_name;
    NSMutableDictionary *_data;
}

@property(readonly, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (id)build;
- (id)init;

@end
