//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTConcertsListingsHeaderData : NSObject
{
    NSURL *_backgroundImageURL;
    NSString *_locationName;
}

@property(readonly, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(readonly, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

