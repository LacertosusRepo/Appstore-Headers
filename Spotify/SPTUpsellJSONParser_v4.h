//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUpsellJSONParser.h"

@class NSString;

@interface SPTUpsellJSONParser_v4 : NSObject <SPTUpsellJSONParser>
{
    id <SPTUpsellJSONButtonParser> _buttonParser;
}

+ (Class)modelClass;
@property(readonly, nonatomic) id <SPTUpsellJSONButtonParser> buttonParser; // @synthesize buttonParser=_buttonParser;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)upsellButtonFromDictionary:(id)arg1 reason:(long long)arg2;
- (id)modelObjectFromJSONDictionary:(id)arg1 error:(out id *)arg2 reasonString:(id)arg3;
- (id)initWithButtonParser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

