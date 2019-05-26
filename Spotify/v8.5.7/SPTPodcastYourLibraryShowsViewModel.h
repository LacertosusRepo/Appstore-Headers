//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;
@protocol SPTCollectionLogger, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTPodcastYourLibraryShowsViewModelDelegate;

@interface SPTPodcastYourLibraryShowsViewModel : NSObject
{
    id <SPTPodcastYourLibraryShowsViewModelDelegate> _delegate;
    NSURL *_URL;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionRequestToken;
    id <SPTCollectionLogger> _collectionLogger;
    NSArray *_showsCollection;
}

@property(copy, nonatomic) NSArray *showsCollection; // @synthesize showsCollection=_showsCollection;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionRequestToken; // @synthesize collectionRequestToken=_collectionRequestToken;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastYourLibraryShowsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)parseResponseItems:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (unsigned long long)numberOfRows;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 collectionLogger:(id)arg3;

@end
