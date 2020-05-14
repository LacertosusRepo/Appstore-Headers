//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentView;
@protocol HUBComponentModel;

@interface SPTPodcastEpisodeFeaturedContentComponent : NSObject
{
    HUBComponentView *_componentView;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak HUBComponentView *componentView; // @synthesize componentView=_componentView;
- (void).cxx_destruct;
- (_Bool)isComponentInWindow:(id)arg1 componentView:(id)arg2;
- (_Bool)needsLoggingWhenComponentIsVisibleInWindow:(id)arg1;
@property(readonly, nonatomic) id <HUBComponentModel> model;
- (id)initWithComponentView:(id)arg1;

@end

