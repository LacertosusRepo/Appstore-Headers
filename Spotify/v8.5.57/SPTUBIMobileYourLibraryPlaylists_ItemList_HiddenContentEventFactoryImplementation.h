//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileYourLibraryPlaylists_ItemList_HiddenContentEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileYourLibraryPlaylists_ItemList_HiddenContentEventFactoryImplementation : NSObject <SPTUBIMobileYourLibraryPlaylists_ItemList_HiddenContentEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithUri:(id)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)_location;
- (id)initWithUri:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

