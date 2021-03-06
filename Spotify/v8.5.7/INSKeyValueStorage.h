//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSKeyValueStorageProtocol-Protocol.h"

@class NSString, NSUserDefaults;

@interface INSKeyValueStorage : NSObject <INSKeyValueStorageProtocol>
{
    NSUserDefaults *_defaults;
    NSString *_keySuffix;
}

@property(retain, nonatomic) NSString *keySuffix; // @synthesize keySuffix=_keySuffix;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void).cxx_destruct;
- (id)suffixedKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 keySuffix:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

