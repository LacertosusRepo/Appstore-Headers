//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface GLUEOfflineSyncStatusViewStyle : NSObject <GLUEStyle>
{
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToOfflineSyncStatusViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
