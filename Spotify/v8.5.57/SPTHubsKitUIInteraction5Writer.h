//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface SPTHubsKitUIInteraction5Writer : NSObject
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
}

@property(copy, nonatomic) CDUnknownBlockType setter; // @synthesize setter=_setter;
@property(copy, nonatomic) CDUnknownBlockType getter; // @synthesize getter=_getter;
- (void).cxx_destruct;
- (void)mutateUIInteraction5:(CDUnknownBlockType)arg1;
@property(copy, nonatomic, setter=setUIInteraction5:) NSDictionary *uiinteraction5;
@property(copy, nonatomic) NSString *interactionType;
@property(copy, nonatomic) NSNumber *itemIndex;
@property(copy, nonatomic) NSString *sectionID;
@property(copy, nonatomic) NSString *requestID;
@property(copy, nonatomic) NSString *featureID;
@property(copy, nonatomic) NSString *pageuri;
- (id)initWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
- (id)initWithComponentModelBuilder:(id)arg1;
- (id)initWithComponentModel:(id)arg1;

@end

