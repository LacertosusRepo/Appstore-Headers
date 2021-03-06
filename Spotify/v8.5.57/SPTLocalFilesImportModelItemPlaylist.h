//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLocalFilesImportModelItem.h"

#import "SPTLocalFilesImportModelItemPlaylist-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTLocalFilesImportModelItemPlaylist : SPTLocalFilesImportModelItem <SPTLocalFilesImportModelItemPlaylist>
{
    long long numberOfTracks;
    NSArray *_trackURLs;
}

@property(retain, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
@property(nonatomic) long long numberOfTracks; // @synthesize numberOfTracks;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) _Bool isPartiallySelected;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

