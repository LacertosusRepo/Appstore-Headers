//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTMutableInnerTubeControllerFactory.h"

@class GIMMe, YTSectionControllerWhitelist;

@interface YTAppInnerTubeControllerFactory : YTMutableInnerTubeControllerFactory
{
    YTSectionControllerWhitelist *_sectionControllerWhitelist;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)configureSectionControllerWhitelist;
- (_Bool)isModalViewControllerForNavigationEndpoint:(id)arg1;
- (void)addSectionControllerMatchingBlocks;
- (void)addSectionControllerFactoryBlocks;
- (void)addViewControllerModelBlocks;
- (id)controllerForNavigationEndpoint:(id)arg1 parentResponder:(id)arg2;
- (void)addViewControllerNavigationEndpointBlocks;
- (id)initWithDataServices:(id)arg1;
- (id)init;

@end

