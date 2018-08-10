//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLastFMMigrationSlateProvider.h"
#import "SPTLastFMMigrationSlateViewControllerSlateDelegate.h"
#import "SPTSlateDataSource.h"
#import "SPTSlateDelegate.h"

@class NSString, SPTLastFMMigrationClientSettings, SPTLastFMMigrationSlateViewController, SPTTheme;

@interface SPTLastFMMigrationSlateProviderImplementation : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTLastFMMigrationSlateViewControllerSlateDelegate, SPTLastFMMigrationSlateProvider>
{
    id <SPTSlateBuilder> _slateBuilder;
    id <SPTSlateManager> _slateManager;
    SPTLastFMMigrationClientSettings *_clientSettings;
    SPTTheme *_theme;
    id <SPTSlate> _slate;
    SPTLastFMMigrationSlateViewController *_lastFMMigrationSlateViewController;
}

@property(retain, nonatomic) SPTLastFMMigrationSlateViewController *lastFMMigrationSlateViewController; // @synthesize lastFMMigrationSlateViewController=_lastFMMigrationSlateViewController;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLastFMMigrationClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) id <SPTSlateBuilder> slateBuilder; // @synthesize slateBuilder=_slateBuilder;
- (void).cxx_destruct;
- (void)didDismissRemindLater:(_Bool)arg1;
- (id)titleForSlate:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)provideSlate;
- (_Bool)shouldPresentSlate;
- (id)initWithSlateBuilder:(id)arg1 slateManager:(id)arg2 clientSettings:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

