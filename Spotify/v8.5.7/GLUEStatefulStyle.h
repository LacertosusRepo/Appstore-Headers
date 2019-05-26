//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface GLUEStatefulStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    NSMutableDictionary *_UIStatesToStyles;
}

+ (id)UIStatesToStylesWithNormalStyle:(id)arg1 highlightedStyle:(id)arg2 disabledStyle:(id)arg3 selectedStyle:(id)arg4 activeStyle:(id)arg5;
@property(readonly, copy, nonatomic) NSMutableDictionary *UIStatesToStyles; // @synthesize UIStatesToStyles=_UIStatesToStyles;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToStatefulStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *allUIStates;
- (id)styleForUIState:(unsigned long long)arg1;
- (void)setStyle:(id)arg1 forUIState:(unsigned long long)arg2;
- (id)initWithUIStatesToStyles:(id)arg1;
- (id)initWithNormalStyle:(id)arg1;
- (void)modifyStateStylesWithModifier:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
