//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface ADJSessionParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_callbackParameters;
    NSMutableDictionary *_partnerParameters;
}

@property(retain, nonatomic) NSMutableDictionary *partnerParameters; // @synthesize partnerParameters=_partnerParameters;
@property(retain, nonatomic) NSMutableDictionary *callbackParameters; // @synthesize callbackParameters=_callbackParameters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

