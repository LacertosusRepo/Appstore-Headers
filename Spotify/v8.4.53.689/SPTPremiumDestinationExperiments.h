//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTPremiumDestinationExperiments : NSObject
{
    _Bool _shouldPresentPriceValuePremiumDestination;
    id <SPTAbbaFeatureFlags> _ABBAFeatureFlags;
}

@property(retain, nonatomic) id <SPTAbbaFeatureFlags> ABBAFeatureFlags; // @synthesize ABBAFeatureFlags=_ABBAFeatureFlags;
@property(nonatomic) _Bool shouldPresentPriceValuePremiumDestination; // @synthesize shouldPresentPriceValuePremiumDestination=_shouldPresentPriceValuePremiumDestination;
- (void).cxx_destruct;
- (void)loadABBAFlags;
- (id)initWithABBAFeatureFlags:(id)arg1;

@end

