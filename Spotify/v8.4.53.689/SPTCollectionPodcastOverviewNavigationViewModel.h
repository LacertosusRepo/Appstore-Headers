//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTCollectionPodcastOverviewNavigationViewModel : NSObject
{
    NSArray *_entries;
    id <SPTPodcastTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)createPodcastURI:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (id)provideUnplayedUnfinishedEntry;
- (void)setupEntries;
- (id)initWithTestManager:(id)arg1;

@end

