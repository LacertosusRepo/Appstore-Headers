//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierFindInterfaceFactory-Protocol.h"

@class NSString;
@protocol SPTSearchPlatformService;

@interface SPTFreeTierFindInterfaceFactoryImplementation : NSObject <SPTFreeTierFindInterfaceFactory>
{
    _Bool _nftExperience;
    id <SPTSearchPlatformService> _searchPlatformService;
}

@property(readonly, nonatomic) _Bool nftExperience; // @synthesize nftExperience=_nftExperience;
@property(nonatomic) __weak id <SPTSearchPlatformService> searchPlatformService; // @synthesize searchPlatformService=_searchPlatformService;
- (void).cxx_destruct;
- (id)makeDefaultConfiguration;
- (id)makeNonNFTSearchViewController;
- (id)makeNFTSearchViewController;
- (id)createSearchViewController;
- (id)initWithSearchPlatformService:(id)arg1 nftExperience:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

