//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol EXP_HUBComponentModelBuilder;

@interface SPTHubsKitUIImpression5Writer : NSObject
{
    id <EXP_HUBComponentModelBuilder> _componentModelBuilder;
}

@property(readonly, nonatomic) id <EXP_HUBComponentModelBuilder> componentModelBuilder; // @synthesize componentModelBuilder=_componentModelBuilder;
- (void).cxx_destruct;
- (void)mutateUIImpression5:(CDUnknownBlockType)arg1;
@property(copy, nonatomic, setter=setUIImpression5:) NSDictionary *uiimpression5;
@property(copy, nonatomic) NSString *impressionType;
@property(copy, nonatomic) NSString *renderType;
@property(copy, nonatomic) NSNumber *itemIndex;
@property(copy, nonatomic) NSString *targetURI;
@property(copy, nonatomic) NSString *sectionID;
@property(copy, nonatomic) NSString *requestID;
@property(copy, nonatomic) NSString *featureID;
@property(copy, nonatomic) NSString *pageuri;
- (id)initWithComponentModelBuilder:(id)arg1;

@end

