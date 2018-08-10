//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SPTTrackCreditsModel : NSObject
{
    NSString *_title;
    NSArray *_roles;
    NSString *_sourceTitle;
    NSString *_sourceValue;
}

@property(readonly, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(readonly, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(readonly, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setValuesFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

