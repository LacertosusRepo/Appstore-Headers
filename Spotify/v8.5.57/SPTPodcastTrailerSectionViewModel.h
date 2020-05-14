//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastViewModelSection-Protocol.h"

@class NSString, NSURL, SPTPodcastLogger;
@protocol SPTExplicitContentAccessManager, SPTPodcastEpisode, SPTPodcastTrailerSectionViewModelDelegate;

@interface SPTPodcastTrailerSectionViewModel : NSObject <SPTPodcastViewModelSection>
{
    _Bool _playing;
    _Bool _enabled;
    _Bool _explicitContent;
    double _headerHeight;
    NSURL *_URI;
    NSURL *_showURI;
    NSString *_title;
    NSString *_durationString;
    NSURL *_imageURL;
    double _progress;
    id <SPTPodcastTrailerSectionViewModelDelegate> _delegate;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    SPTPodcastLogger *_logger;
    id <SPTPodcastEpisode> _trailerEpisode;
}

+ (_Bool)isTrailerEpisodeValid:(id)arg1 errorMessage:(id *)arg2;
@property(retain, nonatomic) id <SPTPodcastEpisode> trailerEpisode; // @synthesize trailerEpisode=_trailerEpisode;
@property(readonly, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTPodcastTrailerSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *showURI; // @synthesize showURI=_showURI;
@property(readonly, copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (id)formattedStringWithDuration:(double)arg1;
- (id)header;
- (void)updateWithPodcastPlayer:(id)arg1;
- (void)updateWithPodcast:(id)arg1;
- (unsigned long long)numberOfRows;
- (long long)identifier;
- (void)contextMenuTapped;
- (void)didTouchUpInside;
- (void)configureWithTrailerEpisode:(id)arg1;
- (id)initWithExplicitContentAccessManager:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

