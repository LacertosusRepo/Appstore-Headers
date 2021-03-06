//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseUIComponentFactory-Protocol.h"

@class NSString;
@protocol GLUETheme;

@interface SPTBrowseUIComponentFactoryImplementation : NSObject <SPTBrowseUIComponentFactory>
{
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)unregisterBrowseComponentsFromComponentRegistry:(id)arg1;
- (void)registerBrowseComponentsToComponentRegistry:(id)arg1;
- (id)browseHubComponents;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

