//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTPremiumDestinationUIOfferTitleStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    struct UIEdgeInsets _titleLabelInsets;
}

@property(nonatomic) struct UIEdgeInsets titleLabelInsets; // @synthesize titleLabelInsets=_titleLabelInsets;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

