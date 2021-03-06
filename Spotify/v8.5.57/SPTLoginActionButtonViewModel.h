//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginActionableButton-Protocol.h"

@class NSString, UIImage;

@interface SPTLoginActionButtonViewModel : NSObject <SPTLoginActionableButton>
{
    NSString *_title;
    UIImage *_icon;
    unsigned long long _type;
    unsigned long long _action;
    unsigned long long _style;
    NSString *_accessibilityIdentifier;
}

@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 type:(unsigned long long)arg3 action:(unsigned long long)arg4 style:(unsigned long long)arg5 accessibilityIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

