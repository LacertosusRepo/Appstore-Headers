//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface HUBComponentUIStateManager : NSObject
{
    NSMutableDictionary *_statesForComponentModelIdentifiers;
}

@property(readonly, nonatomic) NSMutableDictionary *statesForComponentModelIdentifiers; // @synthesize statesForComponentModelIdentifiers=_statesForComponentModelIdentifiers;
- (void).cxx_destruct;
- (void)removeSavedUIStateForComponentModel:(id)arg1;
- (id)restoreUIStateForComponentModel:(id)arg1;
- (void)saveUIState:(id)arg1 forComponentModel:(id)arg2;
- (id)init;

@end

