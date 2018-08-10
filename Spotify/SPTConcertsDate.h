//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSTimeZone;

@interface SPTConcertsDate : NSObject <NSCopying>
{
    _Bool _isTimeUnknown;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property(readonly, nonatomic) _Bool isTimeUnknown; // @synthesize isTimeUnknown=_isTimeUnknown;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2 isTimeUnknown:(_Bool)arg3;

@end

