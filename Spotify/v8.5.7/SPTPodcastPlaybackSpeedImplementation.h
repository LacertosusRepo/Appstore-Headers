//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastPlaybackSpeed-Protocol.h"

@class NSNumber, NSString;

@interface SPTPodcastPlaybackSpeedImplementation : NSObject <SPTPodcastPlaybackSpeed>
{
    unsigned long long _option;
}

+ (id)playbackSpeedFromValue:(id)arg1;
+ (id)allAvailablePlaybackSpeeds;
@property(nonatomic) unsigned long long option; // @synthesize option=_option;
@property(readonly, nonatomic) NSString *translation;
@property(readonly, nonatomic) NSNumber *value;
- (id)iconImageWithSize:(struct CGSize)arg1 theme:(id)arg2;
- (long long)icon;
- (id)initWithSpeedOption:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
