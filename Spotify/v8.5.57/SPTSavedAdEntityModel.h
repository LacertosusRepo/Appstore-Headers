//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTSavedAdEntityModel : NSObject
{
    NSString *_identifier;
    NSURL *_clickThroughURL;
    NSURL *_coverArtURL;
    NSString *_advertiser;
    NSString *_title;
    NSString *_actionText;
}

@property(readonly, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *advertiser; // @synthesize advertiser=_advertiser;
@property(readonly, nonatomic) NSURL *coverArtURL; // @synthesize coverArtURL=_coverArtURL;
@property(readonly, nonatomic) NSURL *clickThroughURL; // @synthesize clickThroughURL=_clickThroughURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

