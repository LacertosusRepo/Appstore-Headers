//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

@interface SPTFreeTierTasteOnboardingChangeset : NSObject
{
    NSArray *_insertions;
    NSArray *_deletions;
    NSIndexPath *_movesFrom;
    NSIndexPath *_movesTo;
    NSArray *_focusPaths;
}

@property(readonly, copy, nonatomic) NSArray *focusPaths; // @synthesize focusPaths=_focusPaths;
@property(readonly, nonatomic) NSIndexPath *movesTo; // @synthesize movesTo=_movesTo;
@property(readonly, nonatomic) NSIndexPath *movesFrom; // @synthesize movesFrom=_movesFrom;
@property(readonly, copy, nonatomic) NSArray *deletions; // @synthesize deletions=_deletions;
@property(readonly, copy, nonatomic) NSArray *insertions; // @synthesize insertions=_insertions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)performChangesOnCollectionView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithInsertions:(id)arg1 deletions:(id)arg2 movesFrom:(id)arg3 movesTo:(id)arg4 focusPaths:(id)arg5;

@end

