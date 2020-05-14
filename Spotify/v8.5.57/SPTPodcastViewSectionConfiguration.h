//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SPTPodcastLogger;
@protocol SPTExplicitContentAccessManager;

@interface SPTPodcastViewSectionConfiguration : NSObject
{
    NSArray *_viewSections;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSMutableArray *_viewSectionContainers;
    SPTPodcastLogger *_logger;
}

@property(readonly, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableArray *viewSectionContainers; // @synthesize viewSectionContainers=_viewSectionContainers;
@property(readonly, nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(copy, nonatomic) NSArray *viewSections; // @synthesize viewSections=_viewSections;
- (void).cxx_destruct;
- (id)instanceForSectionIdentifier:(long long)arg1;
- (void)enableSection:(long long)arg1;
- (void)createViewModelSectionsFromContainers:(id)arg1 podcastPlayer:(id)arg2 cellConfigurator:(id)arg3 cellActionHandlerFactory:(id)arg4 collectionLogger:(id)arg5 podcastLogger:(id)arg6 podcastTestManager:(id)arg7 podcastURL:(id)arg8 sortingService:(id)arg9 explicitContentAccessManager:(id)arg10;
- (id)initWithViewContainers:(id)arg1 podcastPlayer:(id)arg2 cellConfigurator:(id)arg3 cellActionHandlerFactory:(id)arg4 collectionLogger:(id)arg5 podcastLogger:(id)arg6 podcastTestManager:(id)arg7 podcastURL:(id)arg8 sortingService:(id)arg9 explicitContentAccessManager:(id)arg10;

@end
