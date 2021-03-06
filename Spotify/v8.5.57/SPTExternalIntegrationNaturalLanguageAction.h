//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTPlayOptions, SPTPlayOrigin;

@interface SPTExternalIntegrationNaturalLanguageAction : NSObject
{
    unsigned long long _intent;
    NSURL *_URI;
    SPTPlayOrigin *_playOrigin;
    SPTPlayOptions *_playOptions;
}

+ (id)actionWithDictionary:(id)arg1;
@property(readonly, nonatomic) SPTPlayOptions *playOptions; // @synthesize playOptions=_playOptions;
@property(readonly, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (id)initWithIntent:(unsigned long long)arg1 URI:(id)arg2 playOrigin:(id)arg3 playOptions:(id)arg4;

@end

