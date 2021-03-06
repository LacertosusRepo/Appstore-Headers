//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListItem.h"

@class NSDate, NSString, NSURL;

@interface SPTCollectionPodcastEntityListItem : NSObject <SPTCollectionEntityListItem>
{
    _Bool _isNew;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_entityURL;
    long long _icon;
    NSURL *_trackURL;
    unsigned long long _contentType;
    NSString *_loggingContext;
    NSURL *_previewURL;
    NSURL *_offlineURL;
    NSDate *_publishDate;
}

@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSURL *offlineURL; // @synthesize offlineURL=_offlineURL;
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(copy, nonatomic) NSString *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)action;
- (id)initWithPodcastMetadata:(id)arg1 linkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

