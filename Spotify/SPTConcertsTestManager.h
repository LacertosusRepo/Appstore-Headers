//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTConcertsTestManager : NSObject
{
    id <SPTLegacyFeatureFlag> _entityPageFeatureFlag;
    id <SPTLegacyFeatureFlag> _concertShareFlowFeatureFlag;
    id <SPTLegacyFeatureFlag> _showTicketViewInWebViewFeatureFlag;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
}

+ (id)testManagerWithABBAService:(id)arg1 localSettings:(id)arg2 featureSettingsItemFactory:(id)arg3;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly) id <SPTLegacyFeatureFlag> showTicketViewInWebViewFeatureFlag; // @synthesize showTicketViewInWebViewFeatureFlag=_showTicketViewInWebViewFeatureFlag;
@property(readonly, nonatomic) id <SPTLegacyFeatureFlag> concertShareFlowFeatureFlag; // @synthesize concertShareFlowFeatureFlag=_concertShareFlowFeatureFlag;
@property(readonly, nonatomic) id <SPTLegacyFeatureFlag> entityPageFeatureFlag; // @synthesize entityPageFeatureFlag=_entityPageFeatureFlag;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithEntityPageFeatureFlag:(id)arg1 shareFlowConcertsEntityPageFeatureFlag:(id)arg2 showTicketViewInWebviewFeatureFlag:(id)arg3 featureSettingsItemFactory:(id)arg4;

@end

