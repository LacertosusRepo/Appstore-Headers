//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistAboutHubComponentFactory-Protocol.h"

@class NSString, SPTArtistAboutGLUETheme, SPTArtistAboutTestManager;

@interface SPTArtistAboutHubComponentFactoryImplementation : NSObject <SPTArtistAboutHubComponentFactory>
{
    SPTArtistAboutGLUETheme *_theme;
    SPTArtistAboutTestManager *_testManager;
}

@property(retain, nonatomic) SPTArtistAboutTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createBiographyComponent;
- (id)initWithTheme:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

