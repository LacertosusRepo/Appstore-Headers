//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANSEventFilter : NSObject
{
}

+ (int)javaHashCodeForString:(id)arg1;
- (_Bool)shouldDiscardEventWithInstallationID:(id)arg1 forSamplingFactor:(long long)arg2;
- (_Bool)samplingEnabledForEventType:(id)arg1;
- (_Bool)shouldDiscardEvent:(id)arg1 betaToken:(id)arg2 installationID:(id)arg3 withFactor:(long long)arg4;

@end

