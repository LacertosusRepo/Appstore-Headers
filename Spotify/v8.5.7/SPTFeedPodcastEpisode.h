//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTFeedPodcastEpisode : NSObject
{
    NSURL *URI;
    NSString *_name;
    NSURL *_imageURL;
    NSString *_duration;
}

@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI;
- (void).cxx_destruct;
- (id)stringFromTimeInterval:(double)arg1;
- (void)processDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
