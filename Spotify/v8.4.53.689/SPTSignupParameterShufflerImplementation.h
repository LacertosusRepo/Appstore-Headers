//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSignupParameterShuffler.h"

@class NSString;

@interface SPTSignupParameterShufflerImplementation : NSObject <SPTSignupParameterShuffler>
{
}

- (id)md5FromString:(id)arg1;
- (id)createHashFromParameterValues:(id)arg1;
- (id)shuffleEntriesFromQueryParameters:(id)arg1;
- (id)createShuffledKeyListFromParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

