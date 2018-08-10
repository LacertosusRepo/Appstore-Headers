//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBAutoEquatable.h"

#import "EXP_HUBViewModel.h"

@class EXP_HUBViewModelBuilderImplementation, NSArray, NSDate, NSDictionary, NSString;

@interface EXP_HUBViewModelImplementation : EXP_HUBAutoEquatable <EXP_HUBViewModel>
{
    NSString *_identifier;
    NSString *_navigationBarTitle;
    id <EXP_HUBComponentModel> _headerComponentModel;
    NSArray *_bodyComponentModels;
    NSArray *_overlayComponentModels;
    NSDictionary *_customData;
    NSDate *_buildDate;
    EXP_HUBViewModelBuilderImplementation *_builder;
}

+ (id)ignoredAutoEquatablePropertyNames;
@property(readonly, copy, nonatomic) EXP_HUBViewModelBuilderImplementation *builder; // @synthesize builder=_builder;
@property(readonly, copy, nonatomic) NSDate *buildDate; // @synthesize buildDate=_buildDate;
@property(readonly, copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, copy, nonatomic) NSArray *overlayComponentModels; // @synthesize overlayComponentModels=_overlayComponentModels;
@property(readonly, copy, nonatomic) NSArray *bodyComponentModels; // @synthesize bodyComponentModels=_bodyComponentModels;
@property(readonly, nonatomic) id <EXP_HUBComponentModel> headerComponentModel; // @synthesize headerComponentModel=_headerComponentModel;
@property(readonly, copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serializeComponentModels:(id)arg1;
- (id)serialize;
@property(readonly, copy) NSString *debugDescription;
- (id)createBuilder;
- (id)initWithIdentifier:(id)arg1 navigationBarTitle:(id)arg2 headerComponentModel:(id)arg3 bodyComponentModels:(id)arg4 overlayComponentModels:(id)arg5 customData:(id)arg6 builder:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
