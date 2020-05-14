//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class SPTVideoSubtitleConfigurator, SPTVideoSubtitleProvider, SPTVideoSubtitlesMenuActionFactory;
@protocol SPTUIPresentationService;

@interface SPTVideoSubtitlesAction : SPAction
{
    id <SPTUIPresentationService> _presentationService;
    SPTVideoSubtitleProvider *_subtitleProvider;
    SPTVideoSubtitlesMenuActionFactory *_subtitlesMenuActionFactory;
    SPTVideoSubtitleConfigurator *_subtitleConfigurator;
}

@property(retain, nonatomic) SPTVideoSubtitleConfigurator *subtitleConfigurator; // @synthesize subtitleConfigurator=_subtitleConfigurator;
@property(retain, nonatomic) SPTVideoSubtitlesMenuActionFactory *subtitlesMenuActionFactory; // @synthesize subtitlesMenuActionFactory=_subtitlesMenuActionFactory;
@property(retain, nonatomic) SPTVideoSubtitleProvider *subtitleProvider; // @synthesize subtitleProvider=_subtitleProvider;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (_Bool)isEnabled;
- (long long)icon;
- (id)title;
- (id)initWithLogContext:(id)arg1 presentationService:(id)arg2 subtitleProvider:(id)arg3 subtitlesMenuActionFactory:(id)arg4 subtitleConfigurator:(id)arg5;

@end

