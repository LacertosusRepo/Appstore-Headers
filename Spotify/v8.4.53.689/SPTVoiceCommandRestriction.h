//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTVoiceCommandRestriction : NSObject
{
    NSString *_detail;
    NSString *_heading;
}

@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDetail:(id)arg1 heading:(id)arg2;

@end

