//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSupplementaryViewProvider-Protocol.h"

@class NSString, NSURL, SPTCollectionPodcastInfoViewProvider, SPTTheme, UIView;
@protocol SPTCollectionEntityList, SPTCollectionSupplementaryViewProviderDelegate;

@interface SPTCollectionPodcastSupplementaryViewProvider : NSObject <SPTCollectionSupplementaryViewProvider>
{
    id <SPTCollectionSupplementaryViewProviderDelegate> delegate;
    id <SPTCollectionEntityList> _model;
    SPTCollectionPodcastInfoViewProvider *_infoViewProvider;
    NSURL *_podcastPageURI;
    UIView *_footerView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSURL *podcastPageURI; // @synthesize podcastPageURI=_podcastPageURI;
@property(retain, nonatomic) SPTCollectionPodcastInfoViewProvider *infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(retain, nonatomic) id <SPTCollectionEntityList> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTCollectionSupplementaryViewProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)registerTableReusableSectionViews:(id)arg1;
- (double)heightForTableHeaderView:(id)arg1 section:(long long)arg2;
- (double)heightForTableHeaderView;
- (id)provideTableSectionHeaderView:(id)arg1 section:(long long)arg2;
- (void)retryAfterError;
- (id)provideErrorView:(id)arg1 size:(struct CGSize)arg2;
- (id)provideTableHeaderView:(id)arg1;
- (id)provideTableFooterView:(id)arg1;
- (id)initWithModel:(id)arg1 infoViewProvider:(id)arg2 podcastPageURI:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
