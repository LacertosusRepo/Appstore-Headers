//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentRegistry;
@protocol GLUETheme;

@interface SPTSearchHubsRegistration : NSObject
{
    id <GLUETheme> _theme;
    EXP_HUBComponentRegistry *_componentRegistry;
}

@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)unregisterSearchComponents;
- (void)registerSearchComponents;
- (id)initWithTheme:(id)arg1 componentRegistry:(id)arg2;

@end

