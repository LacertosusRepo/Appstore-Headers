//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBSDKMessengerContext.h"

@class NSSet, NSString;

@interface FBSDKMessengerURLHandlerOpenFromComposerContext : FBSDKMessengerContext
{
    NSString *_metadata;
    NSSet *_userIDs;
}

@property(readonly, copy, nonatomic) NSSet *userIDs; // @synthesize userIDs=_userIDs;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)queryComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 userIDs:(id)arg2;

@end

