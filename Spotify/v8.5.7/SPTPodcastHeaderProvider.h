//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEButton, SPTPodcastHeaderDescriptionView, SPTTheme, UIImage;
@protocol GLUEImageLoader, SPTCollectionPlatformTestManager, SPTPodcastTestManager;

@interface SPTPodcastHeaderProvider : NSObject
{
    GLUEButton *_followButton;
    SPTPodcastHeaderDescriptionView *_headerDescriptionView;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPodcastTestManager> _podcastTestManager;
    SPTTheme *_theme;
    id <GLUEImageLoader> _glueImageLoader;
    UIImage *_headerImage;
}

@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) SPTPodcastHeaderDescriptionView *headerDescriptionView; // @synthesize headerDescriptionView=_headerDescriptionView;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
- (void).cxx_destruct;
- (void)hideImageForHeader:(id)arg1 hidden:(_Bool)arg2;
- (void)updateFollowButton:(_Bool)arg1;
- (id)provideFollowButtonWithTarget:(id)arg1;
- (void)updateHeaderView:(id)arg1 withPodcast:(id)arg2;
- (id)provideHeaderViewForTableView:(id)arg1 withTarget:(id)arg2;
- (id)initWithWithTheme:(id)arg1 glueImageLoader:(id)arg2 collectionTestManager:(id)arg3 podcastTestManager:(id)arg4;

@end

