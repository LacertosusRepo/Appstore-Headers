//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureSettingsItemFactory.h"

@class NSMapTable, NSString;

@interface SPTFeatureSettingsItemFactoryImplementation : NSObject <SPTFeatureSettingsItemFactory>
{
    id <SPTSettingsDataSource> _dataSource;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTFeatureSettingsPageRegistry> _registry;
    NSMapTable *_sharedPageStorage;
}

@property(readonly, nonatomic) NSMapTable *sharedPageStorage; // @synthesize sharedPageStorage=_sharedPageStorage;
@property(readonly, nonatomic) id <SPTFeatureSettingsPageRegistry> registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) id <SPTSettingsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)itemWithLabel:(id)arg1 description:(id)arg2 UIProvider:(id)arg3;
- (id)groupItemWithTitle:(id)arg1 description:(id)arg2 items:(id)arg3 presentAsSubPage:(_Bool)arg4;
- (id)subPageItemWithLabel:(id)arg1 description:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)actionItemWithLabel:(id)arg1 description:(id)arg2 action:(CDUnknownBlockType)arg3;
- (id)actionItemWithLabel:(id)arg1 description:(id)arg2 actionFromView:(CDUnknownBlockType)arg3;
- (id)actionItemWithTextField:(id)arg1 description:(id)arg2 autocorrectionEnabled:(_Bool)arg3 action:(CDUnknownBlockType)arg4;
- (id)actionItemWithTextField:(id)arg1 description:(id)arg2 action:(CDUnknownBlockType)arg3;
- (id)multipleChoiceItemWithLabel:(id)arg1 description:(id)arg2 choices:(id)arg3 initialStateKey:(id)arg4 userDefaultsKey:(id)arg5;
- (id)multipleChoiceItemWithLabel:(id)arg1 description:(id)arg2 choices:(id)arg3 initialStateKey:(id)arg4 localSettingsKey:(id)arg5;
- (id)multipleChoiceItemWithLabel:(id)arg1 description:(id)arg2 choices:(id)arg3 initialStateKey:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)switchItemWithLabel:(id)arg1 description:(id)arg2 userDefaultsKey:(id)arg3;
- (id)switchItemWithLabel:(id)arg1 description:(id)arg2 initialState:(_Bool)arg3 userDefaultsKey:(id)arg4 falseValue:(id)arg5 trueValue:(id)arg6;
- (id)switchItemWithLabel:(id)arg1 description:(id)arg2 localSettingsKey:(id)arg3;
- (id)switchItemWithLabel:(id)arg1 description:(id)arg2 initialState:(_Bool)arg3 localSettingsKey:(id)arg4 falseValue:(id)arg5 trueValue:(id)arg6;
- (id)switchItemWithLabel:(id)arg1 description:(id)arg2 initialState:(_Bool)arg3 action:(CDUnknownBlockType)arg4;
- (id)pageWithTitle:(id)arg1;
- (id)initWithDataSource:(id)arg1 navigationRouter:(id)arg2 registry:(id)arg3 sharedPageStorage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
