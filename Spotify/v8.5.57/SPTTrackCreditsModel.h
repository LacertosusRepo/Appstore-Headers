//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTTrackCreditsModel : NSObject
{
    NSString *_trackTitle;
    NSArray *_roles;
    NSArray *_sources;
}

@property(readonly, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(readonly, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(readonly, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
- (void).cxx_destruct;
- (void)setValuesFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

