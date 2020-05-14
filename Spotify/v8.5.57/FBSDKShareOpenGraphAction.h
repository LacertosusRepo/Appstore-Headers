//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBSDKShareOpenGraphValueContainer.h"

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FBSDKShareOpenGraphAction : FBSDKShareOpenGraphValueContainer <FBSDKCopying, NSSecureCoding>
{
    NSString *_actionType;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionWithType:(id)arg1 objectURL:(id)arg2 key:(id)arg3;
+ (id)actionWithType:(id)arg1 objectID:(id)arg2 key:(id)arg3;
+ (id)actionWithType:(id)arg1 object:(id)arg2 key:(id)arg3;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (_Bool)requireKeyNamespace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActionType:(id)arg1;
- (_Bool)isEqualToShareOpenGraphAction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

