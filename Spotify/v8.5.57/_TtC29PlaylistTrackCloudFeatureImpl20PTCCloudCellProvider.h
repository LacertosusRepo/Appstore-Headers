//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistLegacyLayout-Protocol.h"

@class MISSING_TYPE;

@interface _TtC29PlaylistTrackCloudFeatureImpl20PTCCloudCellProvider : NSObject <SPTFreeTierPlaylistLegacyLayout>
{
    MISSING_TYPE *theme;
    MISSING_TYPE *navigator;
    MISSING_TYPE *model;
}

- (void).cxx_destruct;
- (id)init;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (id)reuseIdentifiers;
- (_Bool)handlesCellAtIndexPath:(id)arg1;

@end

