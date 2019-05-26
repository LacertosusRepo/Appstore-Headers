//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTPopupButton : NSObject
{
    NSString *_title;
    id _target;
    SEL _action;
    CDUnknownBlockType _actionHandler;
}

+ (id)buttonWithTitle:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1;
- (void)configurePopupButton:(id)arg1;
- (id)makeSecondaryButton;
- (id)makePrimaryButton;

@end
