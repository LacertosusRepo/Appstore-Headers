//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray;

@protocol PDLAutocompletion <NSCopying, NSCoding, NSObject>
@property(readonly, nonatomic) NSArray *orderedContactMethodFieldArray;
@property(readonly, nonatomic) NSArray *matchingFieldArray;
@property(readonly, nonatomic) id <PDLGroup> group;
@property(readonly, nonatomic) id <PDLPerson> person;
@property(readonly, nonatomic) long long objectType;
@end

