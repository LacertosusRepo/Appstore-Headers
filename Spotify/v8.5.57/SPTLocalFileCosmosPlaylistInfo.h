//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLocalFilePlaylistInfo-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTLocalFileCosmosPlaylistInfo : NSObject <SPTLocalFilePlaylistInfo>
{
    NSString *_title;
    NSURL *_imageURL;
    NSArray *_tracks;
}

@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithPlaylistInfo:(id)arg1 tracks:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

