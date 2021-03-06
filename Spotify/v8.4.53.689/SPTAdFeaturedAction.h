//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTAdFeaturedAction : NSObject
{
    NSString *_name;
    NSURL *_URL;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)parseType:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2;

@end

