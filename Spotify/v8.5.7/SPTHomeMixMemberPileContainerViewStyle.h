//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSString;

@interface SPTHomeMixMemberPileContainerViewStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _overlapLength;
    struct CGSize _entitySize;
}

@property(nonatomic) double overlapLength; // @synthesize overlapLength=_overlapLength;
@property(nonatomic) struct CGSize entitySize; // @synthesize entitySize=_entitySize;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

