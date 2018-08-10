//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, SPTFriendsHomeListenersDataSource, SPTFriendsHomeListenersDelegate, SPTFriendsHomeLogger;

@interface SPTFriendsHomeListenersViewModel : NSObject
{
    SPTFriendsHomeLogger *_logger;
    SPTFriendsHomeListenersDataSource *_dataSource;
    SPTFriendsHomeListenersDelegate *_delegateForTableView;
    NSArray *_listeners;
    id <SPTImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_contextURI;
}

@property(retain, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(copy, nonatomic) NSArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) SPTFriendsHomeListenersDelegate *delegateForTableView; // @synthesize delegateForTableView=_delegateForTableView;
@property(retain, nonatomic) SPTFriendsHomeListenersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SPTFriendsHomeLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)pageURI;
- (id)listenerAtIndexPath:(id)arg1;
- (void)registerCellClassesOnTableView:(id)arg1;
- (id)initWithListeners:(id)arg1 imageLoaderFactory:(id)arg2 linkDispatcher:(id)arg3 logger:(id)arg4 contextURI:(id)arg5;

@end
