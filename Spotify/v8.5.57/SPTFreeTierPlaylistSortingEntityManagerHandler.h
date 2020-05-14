//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSortingEntityManagerHandler-Protocol.h"

@class NSString;
@protocol SPTLocalSettings;

@interface SPTFreeTierPlaylistSortingEntityManagerHandler : NSObject <SPTCollectionSortingEntityManagerHandler>
{
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (id)collectionSortingEntityManagerRetrieveSortingDictionary;
- (void)collectionSortingEntityManagerStoreSortingDictionary:(id)arg1;
- (_Bool)handleSortingEntityURL:(id)arg1;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

