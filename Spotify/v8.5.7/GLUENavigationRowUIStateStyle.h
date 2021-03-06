//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUEAccessoryIconViewStyle, GLUELabelStyle, NSString, UIColor;

@interface GLUENavigationRowUIStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _alpha;
    UIColor *_backgroundColor;
    GLUEAccessoryIconViewStyle *_disclosureIndicatorStyle;
    double _disclosureIndicatorMargin;
    GLUEAccessoryIconViewStyle *_accessoryIconViewStyle;
    double _accessoryIconViewMargin;
    GLUELabelStyle *_titleLabelStyle;
}

@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double accessoryIconViewMargin; // @synthesize accessoryIconViewMargin=_accessoryIconViewMargin;
@property(copy, nonatomic) GLUEAccessoryIconViewStyle *accessoryIconViewStyle; // @synthesize accessoryIconViewStyle=_accessoryIconViewStyle;
@property(nonatomic) double disclosureIndicatorMargin; // @synthesize disclosureIndicatorMargin=_disclosureIndicatorMargin;
@property(copy, nonatomic) GLUEAccessoryIconViewStyle *disclosureIndicatorStyle; // @synthesize disclosureIndicatorStyle=_disclosureIndicatorStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToNavigationRowUIStateStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

