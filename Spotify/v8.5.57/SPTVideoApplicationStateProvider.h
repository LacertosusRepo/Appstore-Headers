//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;

@interface SPTVideoApplicationStateProvider : NSObject
{
    long long _state;
    UIApplication *_application;
}

@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1;
- (id)init;

@end

