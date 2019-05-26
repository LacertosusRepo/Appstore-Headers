//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPTHomeMixDomainMediator, SPTHomeMixDomainModel, UIColor;

@interface SPTHomeMixWelcomeViewModel : NSObject
{
    _Bool _showWelcomeLayout;
    NSArray *_genres;
    NSString *_localizedMixName;
    NSString *_topGenresTitleText;
    UIColor *_titleColor;
    SPTHomeMixDomainModel *_domainModel;
    SPTHomeMixDomainMediator *_domainMediator;
}

@property(readonly, nonatomic) SPTHomeMixDomainMediator *domainMediator; // @synthesize domainMediator=_domainMediator;
@property(readonly, nonatomic) SPTHomeMixDomainModel *domainModel; // @synthesize domainModel=_domainModel;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *topGenresTitleText; // @synthesize topGenresTitleText=_topGenresTitleText;
@property(readonly, copy, nonatomic) NSString *localizedMixName; // @synthesize localizedMixName=_localizedMixName;
@property(readonly, nonatomic, getter=shouldShowWelcomeLayout) _Bool showWelcomeLayout; // @synthesize showWelcomeLayout=_showWelcomeLayout;
@property(readonly, copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
- (void).cxx_destruct;
- (void)logGenreTapped:(unsigned long long)arg1;
- (void)listenNowTapped;
- (void)openSupportWebPage;
- (void)updateWelcomeStatus;
- (id)populateGenreCardsFromModel:(id)arg1;
- (id)familyTitleFromEntityModel:(id)arg1;
- (id)duoTitleFromEntityModel:(id)arg1;
- (void)updateStringsFromEntityModel:(id)arg1 showWelcomeLayout:(_Bool)arg2;
- (id)initWithShowWelcomeLayout:(_Bool)arg1 domainModel:(id)arg2 domainMediator:(id)arg3;

@end

