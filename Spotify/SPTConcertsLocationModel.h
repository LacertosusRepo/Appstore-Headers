//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface SPTConcertsLocationModel : NSObject <NSCoding>
{
    NSNumber *_geonameId;
    NSString *_name;
}

+ (id)locationsWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *geonameId; // @synthesize geonameId=_geonameId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGeonameId:(id)arg1 name:(id)arg2;

@end

