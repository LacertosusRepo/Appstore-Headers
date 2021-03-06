//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSUserDefaults, SPCore;

@interface SPTLastFMMigrationClientSettings : NSObject
{
    SPCore *_core;
    id <SPTKeychainManager> _keychainManager;
    NSUserDefaults *_defaults;
}

@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) id <SPTKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (void)purgeLastFmData;
@property(readonly, nonatomic) _Bool lastfmEnabled;
@property(readonly, nonatomic) NSDate *lastFMMigrationReminderDate;
- (void)setLastFMReminder;
- (id)initWithCore:(id)arg1 keychainManager:(id)arg2 defaults:(id)arg3;

@end

