//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicArtistModelItemEntity-Protocol.h"

@class NSString;
@protocol SPTYourLibraryMusicArtistEntity;

@interface SPTYourLibraryMusicArtistModelItemEntityImplementation : NSObject <SPTYourLibraryMusicArtistModelItemEntity>
{
    id <SPTYourLibraryMusicArtistEntity> _artistEntity;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTYourLibraryMusicArtistEntity> artistEntity; // @synthesize artistEntity=_artistEntity;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnDemand) _Bool onDemand;
- (id)initWithArtistEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
