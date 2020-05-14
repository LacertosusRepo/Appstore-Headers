//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEScrollViewStyle-Protocol.h"

@class NSString, UIColor;

@interface GLUECollectionViewStyle : NSObject <GLUEScrollViewStyle>
{
    long long scrollIndicatorStyle;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long scrollIndicatorStyle; // @synthesize scrollIndicatorStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

