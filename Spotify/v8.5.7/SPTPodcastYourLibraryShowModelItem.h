//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface SPTPodcastYourLibraryShowModelItem : NSObject
{
    NSString *_title;
    NSString *_publisher;
    NSURL *_imageURL;
    NSURL *_entityURL;
    NSString *_loggingContext;
    NSDate *_publishDate;
}

@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(copy, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)composeDescriptionText;
- (id)initWithPodcastMetadata:(id)arg1;

@end

