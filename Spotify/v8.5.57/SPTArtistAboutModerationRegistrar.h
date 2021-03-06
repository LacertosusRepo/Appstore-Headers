//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTArtistAboutStateProvider;
@protocol SPTModerationReportDecorationRegistry;

@interface SPTArtistAboutModerationRegistrar : NSObject
{
    SPTArtistAboutStateProvider *_stateProvider;
    id <SPTModerationReportDecorationRegistry> _moderationDecorationRegistry;
}

@property(retain, nonatomic) id <SPTModerationReportDecorationRegistry> moderationDecorationRegistry; // @synthesize moderationDecorationRegistry=_moderationDecorationRegistry;
@property(readonly, nonatomic) SPTArtistAboutStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
- (void).cxx_destruct;
- (void)unregisterGalleryModerationDecorator;
- (void)registerGalleryModerationDecorator;
- (id)initWithStateProvider:(id)arg1 moderationDecorationRegistry:(id)arg2;

@end

