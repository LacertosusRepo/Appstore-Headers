//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol HUBComponentModel;

@interface SPTHubsKitUIImpression5Reader : NSObject
{
    id <HUBComponentModel> _componentModel;
}

@property(readonly, nonatomic) id <HUBComponentModel> componentModel; // @synthesize componentModel=_componentModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *uiimpression5;
- (id)uiimpression5LogMessageWithTimestamp:(id)arg1;
@property(readonly, copy, nonatomic) NSString *impressionType;
@property(readonly, copy, nonatomic) NSString *renderType;
@property(readonly, copy, nonatomic) NSNumber *itemIndex;
@property(readonly, copy, nonatomic) NSString *targetURI;
@property(readonly, copy, nonatomic) NSString *sectionID;
@property(readonly, copy, nonatomic) NSString *requestID;
@property(readonly, copy, nonatomic) NSString *featureID;
@property(readonly, copy, nonatomic) NSString *pageuri;
- (id)initWithComponentModel:(id)arg1;

@end
