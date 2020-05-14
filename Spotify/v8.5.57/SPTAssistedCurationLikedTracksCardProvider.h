//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardModelProviderInterfaceDelegate-Protocol.h"
#import "SPTAssistedCurationCardsProvider-Protocol.h"

@class NSString, SPTAssistedCurationCardModelImplementation;
@protocol SPTAssistedCurationCardsProviderDelegate, SPTCollectionPlatformDataLoader;

@interface SPTAssistedCurationLikedTracksCardProvider : NSObject <SPTAssistedCurationCardModelProviderInterfaceDelegate, SPTAssistedCurationCardsProvider>
{
    _Bool _hasMore;
    id <SPTAssistedCurationCardsProviderDelegate> _delegate;
    SPTAssistedCurationCardModelImplementation *_currentCard;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    struct _NSRange _currentRange;
}

+ (id)identifier;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(nonatomic) struct _NSRange currentRange; // @synthesize currentRange=_currentRange;
@property(retain, nonatomic) SPTAssistedCurationCardModelImplementation *currentCard; // @synthesize currentCard=_currentCard;
@property(nonatomic) __weak id <SPTAssistedCurationCardsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadMoreTracksForCard:(id)arg1;
- (_Bool)hasMoreTracksForCard:(id)arg1;
- (void)fetchTrackInRange:(struct _NSRange)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideCardsForCurrentTracks:(id)arg1 andContextName:(id)arg2;
- (id)initWithCollectionPlatformDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

