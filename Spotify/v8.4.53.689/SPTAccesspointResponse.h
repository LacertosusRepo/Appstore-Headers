//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccesspointResponse.h"

@class NSError, NSString;

@interface SPTAccesspointResponse : NSObject <SPTAccesspointResponse>
{
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (SEL)resultParserSelector;
- (id)initWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

