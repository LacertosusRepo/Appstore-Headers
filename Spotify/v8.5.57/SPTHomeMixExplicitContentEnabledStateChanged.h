//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@interface SPTHomeMixExplicitContentEnabledStateChanged : SPTHomeMixEvent
{
    _Bool _explicitContentRestricted;
}

@property(readonly, nonatomic, getter=isExplicitContentRestricted) _Bool explicitContentRestricted; // @synthesize explicitContentRestricted=_explicitContentRestricted;
- (id)initWithExplicitContentRestricted:(_Bool)arg1;

@end
