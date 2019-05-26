//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentView;
@protocol EXP_HUBComponentModel;

@interface SPTPodcastRecommendationComponent : NSObject
{
    EXP_HUBComponentView *_componentView;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak EXP_HUBComponentView *componentView; // @synthesize componentView=_componentView;
- (void).cxx_destruct;
- (_Bool)isComponentInWindow:(id)arg1 componentView:(id)arg2;
- (_Bool)needsLoggingWhenScrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) id <EXP_HUBComponentModel> model;
- (id)initWithComponentView:(id)arg1;

@end

