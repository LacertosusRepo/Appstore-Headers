//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SPTPodcastEpisodeCachedProgress : NSObject
{
    NSNumber *_progress;
    NSNumber *_position;
    NSNumber *_duration;
}

@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(retain, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)initWithProgress:(id)arg1 position:(id)arg2 duration:(id)arg3;

@end

