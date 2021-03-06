//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTShelves.h"
#import "SPTSwipeableTableViewCellDelegate.h"

@class NSMapTable, NSString, SPTShelfRegistryImplementation;

@interface SPTShelvesImplementation : NSObject <SPTSwipeableTableViewCellDelegate, SPTShelves>
{
    SPTShelfRegistryImplementation *_shelfRegistry;
    NSMapTable *_shelfCompletionBlocks;
}

@property(retain, nonatomic) NSMapTable *shelfCompletionBlocks; // @synthesize shelfCompletionBlocks=_shelfCompletionBlocks;
@property(readonly, nonatomic) SPTShelfRegistryImplementation *shelfRegistry; // @synthesize shelfRegistry=_shelfRegistry;
- (void).cxx_destruct;
- (void)executeShelfActionCompletedCompletionBlockForCell:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 didCompleteGesture:(long long)arg2 withHorizontalVelocity:(double)arg3 triggerOffset:(double)arg4;
- (void)setAvailableShelvesForCell:(id)arg1 withTrackURL:(id)arg2 sourceURL:(id)arg3;
- (void)enableShelvesOnCell:(id)arg1 trackURL:(id)arg2 sourceURL:(id)arg3 shelfActionCompleted:(CDUnknownBlockType)arg4;
- (id)initWithShelfRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

