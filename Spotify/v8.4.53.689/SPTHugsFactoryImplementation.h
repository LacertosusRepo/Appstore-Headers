//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHugsFactory.h"

@class EXP_HUGSComponentFallbackHandler, EXP_HUGSComponentLayoutManager, HUGSIconImageResolver, NSString;

@interface SPTHugsFactoryImplementation : NSObject <SPTHugsFactory>
{
    id <GLUETheme> _theme;
    HUGSIconImageResolver *_iconImageResolver;
    EXP_HUGSComponentLayoutManager *_componentLayoutManager;
    EXP_HUGSComponentFallbackHandler *_componentFallbackHandler;
}

@property(readonly, nonatomic) EXP_HUGSComponentFallbackHandler *componentFallbackHandler; // @synthesize componentFallbackHandler=_componentFallbackHandler;
@property(readonly, nonatomic) EXP_HUGSComponentLayoutManager *componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) HUGSIconImageResolver *iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createHugs2Components;
- (id)createHugsComponentsWithStyleOverrider:(id)arg1;
- (id)provideComponentFallbackHandler;
- (id)provideComponentLayoutManager;
- (id)provideIconImageResolver;
- (id)createStyleOverriderWithComponentModelURIResolver:(id)arg1;
- (id)createComponentRegistryWithComponentModelURIResolver:(id)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

