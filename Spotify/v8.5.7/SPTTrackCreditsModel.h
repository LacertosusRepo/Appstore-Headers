//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTTrackCreditsModel : NSObject
{
    NSString *_trackTitle;
    NSArray *_roles;
    NSString *_sourceTitle;
    NSString *_sourceValue;
}

@property(readonly, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(readonly, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(readonly, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(readonly, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
- (void).cxx_destruct;
- (void)setValuesFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

