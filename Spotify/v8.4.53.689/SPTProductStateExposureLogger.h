//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SPTProductStateExposureLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSMutableDictionary *_exposedFlags;
}

@property(retain, nonatomic) NSMutableDictionary *exposedFlags; // @synthesize exposedFlags=_exposedFlags;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logExposureForFlagName:(id)arg1 variant:(id)arg2;
- (id)initWithLogCenter:(id)arg1;

@end
