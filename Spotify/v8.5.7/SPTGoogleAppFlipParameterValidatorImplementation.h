//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleAppFlipParameterValidator-Protocol.h"

@class NSString;

@interface SPTGoogleAppFlipParameterValidatorImplementation : NSObject <SPTGoogleAppFlipParameterValidator>
{
}

- (_Bool)validateSourceApplication:(id)arg1;
- (_Bool)validateScopes:(id)arg1;
- (_Bool)validateState:(id)arg1;
- (_Bool)validateRedirectURI:(id)arg1;
- (_Bool)validateClientID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

