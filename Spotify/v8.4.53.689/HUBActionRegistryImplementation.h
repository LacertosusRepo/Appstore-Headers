//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBActionRegistry.h"

@class NSMutableDictionary;

@interface HUBActionRegistryImplementation : NSObject <HUBActionRegistry>
{
    id <HUBAction> _selectionAction;
    NSMutableDictionary *_actionFactories;
}

@property(readonly, nonatomic) NSMutableDictionary *actionFactories; // @synthesize actionFactories=_actionFactories;
@property(readonly, nonatomic) id <HUBAction> selectionAction; // @synthesize selectionAction=_selectionAction;
- (void).cxx_destruct;
- (void)unregisterActionFactoryForNamespace:(id)arg1;
- (void)registerActionFactory:(id)arg1 forNamespace:(id)arg2;
- (id)createCustomActionForIdentifier:(id)arg1;
- (id)initWithSelectionAction:(id)arg1;

@end
