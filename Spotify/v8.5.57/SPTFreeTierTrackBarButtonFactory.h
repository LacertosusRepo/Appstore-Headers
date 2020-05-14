//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTContextMenuPresenterFactory, SPTLogCenter, SPTUBILogger;

@interface SPTFreeTierTrackBarButtonFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (id)createContextMenuButtonViewModelForViewURI:(id)arg1;
- (id)createFeedbackButtonViewModelForViewURI:(id)arg1;
- (id)initWithCollectionConfiguration:(id)arg1 collectionPlatform:(id)arg2 contextMenuPresenterFactory:(id)arg3 logCenter:(id)arg4 ubiLogger:(id)arg5;

@end

