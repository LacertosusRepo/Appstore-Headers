//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface GCKMediaQueueContainerMetadata : NSObject <NSCopying, NSSecureCoding>
{
    long long _containerType;
    NSString *_title;
    NSArray *_sections;
    double _containerDuration;
    NSArray *_containerImages;
    NSArray *_authors;
    NSArray *_narrators;
    NSString *_publisher;
    NSString *_releaseDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)containerMetadataWithJSONObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) NSArray *narrators; // @synthesize narrators=_narrators;
@property(readonly, copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property(readonly, copy, nonatomic) NSArray *containerImages; // @synthesize containerImages=_containerImages;
@property(readonly, nonatomic) double containerDuration; // @synthesize containerDuration=_containerDuration;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long containerType; // @synthesize containerType=_containerType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)stringArrayFromJSONObject:(id)arg1 forKey:(id)arg2;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithContainerType:(long long)arg1 title:(id)arg2 sections:(id)arg3 containerImages:(id)arg4 containerDuration:(double)arg5 authors:(id)arg6 narrators:(id)arg7 publisher:(id)arg8 releaseDate:(id)arg9;

@end

