//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHearablesSpotifyGoAPI;

@interface SPTHearablesLegacySerialProtocolApiAdapter : NSObject
{
    id <SPTHearablesSpotifyGoAPI> _adaptee;
}

@property(retain, nonatomic) id <SPTHearablesSpotifyGoAPI> adaptee; // @synthesize adaptee=_adaptee;
- (void).cxx_destruct;
- (id)parseData:(id)arg1;
- (id)executeMessage:(id)arg1;
- (id)initWithImplementation:(id)arg1;

@end
