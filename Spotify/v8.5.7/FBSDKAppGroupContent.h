//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FBSDKAppGroupContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSString *_groupDescription;
    NSString *_name;
    unsigned long long _privacy;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long privacy; // @synthesize privacy=_privacy;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAppGroupContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

