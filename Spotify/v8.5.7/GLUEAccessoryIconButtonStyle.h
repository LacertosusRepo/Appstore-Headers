//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface GLUEAccessoryIconButtonStyle : NSObject <GLUEStyle>
{
    UIColor *_iconColor;
    struct CGSize _size;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAccessoryIconButtonStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

