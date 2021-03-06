//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSError, NSRegularExpression;
@protocol HUBContentOperationDelegate;

@interface SPTPremiumDestinationGradientContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    NSRegularExpression *_regularExpression;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isValidColorAlphaValue:(id)arg1;
- (_Bool)isValidHexColorString:(id)arg1;
- (id)gradientDictionaryFromComponentModelBuilder:(id)arg1;
- (void)checkColorsForOfferCardComponentModelBuilder:(id)arg1;
- (void)checkColorsForPremiumValueCardComponentModelBuilder:(id)arg1;
- (void)checkColorsForGradientComponentModelBuilder:(id)arg1;
- (void)checkGradientForBodyComponentModelBuilders:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)init;

@end

