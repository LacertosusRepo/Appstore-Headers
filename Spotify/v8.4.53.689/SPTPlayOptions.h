//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSNumber, SPTPlayerOptionOverrides, SPTPlayerSuppressions, SPTSkipToTrack;

@interface SPTPlayOptions : NSObject <NSCopying>
{
    _Bool _initiallyPaused;
    SPTSkipToTrack *_skipTo;
    NSNumber *_seekTo;
    SPTPlayerOptionOverrides *_playerOptionsOverride;
    SPTPlayerSuppressions *_suppressions;
    unsigned long long _operation;
    unsigned long long _trigger;
    NSDictionary *_configurationOverride;
}

@property(copy, nonatomic) NSDictionary *configurationOverride; // @synthesize configurationOverride=_configurationOverride;
@property(nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(copy, nonatomic) SPTPlayerSuppressions *suppressions; // @synthesize suppressions=_suppressions;
@property(copy, nonatomic) SPTPlayerOptionOverrides *playerOptionsOverride; // @synthesize playerOptionsOverride=_playerOptionsOverride;
@property(nonatomic) _Bool initiallyPaused; // @synthesize initiallyPaused=_initiallyPaused;
@property(copy, nonatomic) NSNumber *seekTo; // @synthesize seekTo=_seekTo;
@property(copy, nonatomic) SPTSkipToTrack *skipTo; // @synthesize skipTo=_skipTo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)stringToTrigger:(id)arg1;
- (unsigned long long)stringToOperation:(id)arg1;
- (id)triggerToString:(unsigned long long)arg1;
- (id)operationToString:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;
@property(readonly, nonatomic) struct PreparePlayOptions cpp;

@end

