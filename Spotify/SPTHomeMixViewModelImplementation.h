//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeMixModelDelegate.h"
#import "SPTHomeMixViewModel.h"

@class NSArray, NSString, NSURL;

@interface SPTHomeMixViewModelImplementation : NSObject <SPTHomeMixModelDelegate, SPTHomeMixViewModel>
{
    id <SPTHomeMixViewModelDelegate> _delegate;
    id <SPTHomeMixModel> _homeMixModel;
    NSArray *_trackViewModels;
}

@property(copy, nonatomic) NSArray *trackViewModels; // @synthesize trackViewModels=_trackViewModels;
@property(readonly, nonatomic) id <SPTHomeMixModel> homeMixModel; // @synthesize homeMixModel=_homeMixModel;
@property(nonatomic) __weak id <SPTHomeMixViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)homeMixModel:(id)arg1 didFailToUpdateHomeMixEntityWithError:(id)arg2;
- (void)homeMixModel:(id)arg1 didUpdateHomeMixMetadataEntity:(id)arg2;
- (void)homeMixModel:(id)arg1 didFailToUpdateHomeMixTrackEntitiesWithError:(id)arg2;
- (void)homeMixModel:(id)arg1 didUpdateHomeMixTrackEntities:(id)arg2;
- (id)trackViewModelForIndex:(long long)arg1;
- (void)load;
@property(readonly, nonatomic) unsigned long long numberOfTracks;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic) NSString *pageIdentifier;
- (id)initWithHomeMixModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

