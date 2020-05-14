//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTExplicitContentAccessManager, SPTSearchUBIHubsLogger;

@interface SPTSearchExplicitContentCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTSearchUBIHubsLogger> _ubiHubsLogger;
}

+ (id)defaultName;
+ (id)commandWithEntityURI:(id)arg1;
@property(readonly, nonatomic) id <SPTSearchUBIHubsLogger> ubiHubsLogger; // @synthesize ubiHubsLogger=_ubiHubsLogger;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithExplicitContentAccessManager:(id)arg1 ubiHubsLogger:(id)arg2;

@end

