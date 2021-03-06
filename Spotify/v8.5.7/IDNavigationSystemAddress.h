//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDNavigationSystemAddress : NSObject
{
    double _latitude;
    double _longitude;
    NSString *_name;
}

+ (id)new;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (_Bool)isEqualToNavigationSystemAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 name:(id)arg3;

@end

