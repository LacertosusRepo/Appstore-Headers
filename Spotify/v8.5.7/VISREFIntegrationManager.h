//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, VISREFNavigationBarManager;

@interface VISREFIntegrationManager : NSObject
{
    _Bool _visualRefreshHeaderEnabled;
    _Bool _visualRefreshGreenButtonEnabled;
    _Bool _visualRefreshSectionHeaderEnabled;
    _Bool _visualRefreshPlaylistTrackRowArtworkEnabled;
    _Bool _visualRefreshLeftAlignedTrackCloudEnabled;
    VISREFNavigationBarManager *_navigationBarManager;
    NSArray *_headerComponents;
}

@property(copy, nonatomic) NSArray *headerComponents; // @synthesize headerComponents=_headerComponents;
@property(retain, nonatomic) VISREFNavigationBarManager *navigationBarManager; // @synthesize navigationBarManager=_navigationBarManager;
@property(readonly, nonatomic, getter=isVisualRefreshLeftAlignedTrackCloudEnabled) _Bool visualRefreshLeftAlignedTrackCloudEnabled; // @synthesize visualRefreshLeftAlignedTrackCloudEnabled=_visualRefreshLeftAlignedTrackCloudEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshPlaylistTrackRowArtworkEnabled) _Bool visualRefreshPlaylistTrackRowArtworkEnabled; // @synthesize visualRefreshPlaylistTrackRowArtworkEnabled=_visualRefreshPlaylistTrackRowArtworkEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshSectionHeaderEnabled) _Bool visualRefreshSectionHeaderEnabled; // @synthesize visualRefreshSectionHeaderEnabled=_visualRefreshSectionHeaderEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshGreenButtonEnabled) _Bool visualRefreshGreenButtonEnabled; // @synthesize visualRefreshGreenButtonEnabled=_visualRefreshGreenButtonEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshHeaderEnabled) _Bool visualRefreshHeaderEnabled; // @synthesize visualRefreshHeaderEnabled=_visualRefreshHeaderEnabled;
- (void).cxx_destruct;
- (id)providePlayButtonTestManager;
- (id)overriddenComponentRegistryFromRegistry:(id)arg1 sptTheme:(id)arg2 contextMenuButtonViewModel:(id)arg3 feedbackButtonViewModel:(id)arg4 viewController:(id)arg5 headerType:(unsigned long long)arg6;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)configureWithViewController:(id)arg1;
- (id)initWithVisualRefreshHeaderEnabled:(_Bool)arg1 visualRefreshGreenButtonEnabled:(_Bool)arg2 visualRefreshSectionHeaderEnabled:(_Bool)arg3 visualRefreshPlaylistTrackRowArtworkEnabled:(_Bool)arg4 visualRefreshLeftAlignedTrackCloudEnabled:(_Bool)arg5;
- (id)initWithConfigurationFromVisualRefreshFlagsService:(id)arg1;

@end

