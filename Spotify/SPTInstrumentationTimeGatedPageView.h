//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTInstrumentationPageView.h"

@interface SPTInstrumentationTimeGatedPageView : SPTInstrumentationPageView
{
    SPTInstrumentationPageView *_underlyingPageView;
}

+ (id)keyPathsForValuesAffectingNavigationRootIdentifier;
+ (id)keyPathsForValuesAffectingPageName;
+ (id)keyPathsForValuesAffectingPageURI;
+ (id)keyPathsForValuesAffectingPageIdentifier;
+ (id)keyPathsForValuesAffectingResolved;
@property(readonly, nonatomic) SPTInstrumentationPageView *underlyingPageView; // @synthesize underlyingPageView=_underlyingPageView;
- (void).cxx_destruct;
- (id)navigationRootIdentifier;
- (id)pageName;
- (id)pageURI;
- (id)pageIdentifier;
- (_Bool)isResolved;
- (long long)entryTimestamp;
- (id)initWithPageView:(id)arg1 earliestEntryTimestamp:(long long)arg2;

@end

