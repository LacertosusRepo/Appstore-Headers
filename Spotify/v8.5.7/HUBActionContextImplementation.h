//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBActionContext-Protocol.h"

@class HUBIdentifier, NSDictionary, NSURL, UIViewController;
@protocol HUBComponentModel, HUBFeatureInfo, HUBViewModel;

@interface HUBActionContextImplementation : NSObject <HUBActionContext>
{
    unsigned long long _trigger;
    HUBIdentifier *_customActionIdentifier;
    NSDictionary *_customData;
    id <HUBFeatureInfo> _featureInfo;
    NSURL *_viewURI;
    id <HUBViewModel> _viewModel;
    id <HUBComponentModel> _componentModel;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <HUBComponentModel> componentModel; // @synthesize componentModel=_componentModel;
@property(readonly, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <HUBFeatureInfo> featureInfo; // @synthesize featureInfo=_featureInfo;
@property(readonly, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) HUBIdentifier *customActionIdentifier; // @synthesize customActionIdentifier=_customActionIdentifier;
@property(readonly, nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)initWithTrigger:(unsigned long long)arg1 customActionIdentifier:(id)arg2 customData:(id)arg3 featureInfo:(id)arg4 viewURI:(id)arg5 viewModel:(id)arg6 componentModel:(id)arg7 viewController:(id)arg8;

@end

