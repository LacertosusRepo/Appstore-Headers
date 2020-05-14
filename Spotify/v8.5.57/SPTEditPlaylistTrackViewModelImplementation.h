//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEditPlaylistTrackViewModel-Protocol.h"

@class NSString;
@protocol SPTEditPlaylistModelEntityTrackFields;

@interface SPTEditPlaylistTrackViewModelImplementation : NSObject <SPTEditPlaylistTrackViewModel>
{
    _Bool _showTrackOwner;
    NSString *_subtitle;
    id <SPTEditPlaylistModelEntityTrackFields> _trackEntity;
}

@property(nonatomic) _Bool showTrackOwner; // @synthesize showTrackOwner=_showTrackOwner;
@property(retain, nonatomic) id <SPTEditPlaylistModelEntityTrackFields> trackEntity; // @synthesize trackEntity=_trackEntity;
- (void).cxx_destruct;
- (id)albumName;
- (id)artistNames;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithPlaylistTrackEntity:(id)arg1 showTrackOwner:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
