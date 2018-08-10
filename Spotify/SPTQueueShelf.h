//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTShelf.h"

@class NSString, SPTSwipeableTableViewCellShelf;

@interface SPTQueueShelf : NSObject <SPTShelf>
{
    id <SPTPlayerQueue> _playerQueue;
    id <SPTUpsellManager> _upsellManager;
    id <SPTEntityService> _entityService;
    SPTSwipeableTableViewCellShelf *_shelfView;
}

@property(readonly, nonatomic) SPTSwipeableTableViewCellShelf *shelfView; // @synthesize shelfView=_shelfView;
@property(readonly, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
- (void).cxx_destruct;
- (void)shelfView:(CDUnknownBlockType)arg1;
- (id)initWithPlayerQueue:(id)arg1 upsellManager:(id)arg2 entityService:(id)arg3;
- (void)execute:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

