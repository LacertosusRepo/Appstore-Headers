//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicSkippedRecommendedTracks-Protocol.h"

@class NSArray, NSMutableSet, NSString;
@protocol SPTLocalSettings;

@interface SPTYourLibraryMusicSkippedRecommendedTracksImplementation : NSObject <SPTYourLibraryMusicSkippedRecommendedTracks>
{
    id <SPTLocalSettings> _localSettings;
    NSMutableSet *_mutableSkippedTracks;
}

@property(retain, nonatomic) NSMutableSet *mutableSkippedTracks; // @synthesize mutableSkippedTracks=_mutableSkippedTracks;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)persistSkippedTracks;
- (void)resetSkippedTracks;
- (void)removeSkippedRecommendedTrackURL:(id)arg1;
- (void)addSkippedRecommendedTrackURL:(id)arg1;
@property(copy, nonatomic) NSArray *skippedTracks; // @dynamic skippedTracks;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

