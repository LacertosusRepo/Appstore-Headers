//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol MySpinKeyboardProtocol;

@interface MySpinKeyboardRegistry : NSObject
{
    NSArray *_activeKeyboardObjects;
    NSArray *_enabledKeyboardIDs;
    id <MySpinKeyboardProtocol> _fallbackKeyboard;
    id <MySpinKeyboardProtocol> _currentKeyboard;
    NSMutableDictionary *_availableKeyboardsCache;
}

+ (_Bool)keyboard:(id)arg1 isInListOfKeyboards:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)saveCurrentKeyboardID:(id)arg1;
- (id)loadCurrentKeyboardID;
- (void)changeToNextKeyboard;
- (void)recalculateCurrentKeyboard;
- (void)recalculateActiveKeyboardsFiltered;
- (void)setEnabledKeyboardIDs:(id)arg1;
- (id)enabledKeyboardIDs;
- (id)activeKeyboardObjects;
@property(readonly) NSArray *availableKeyboards;
- (void)registerExternalKeyboardClasses:(id)arg1;
- (void)registerExternalKeyboardClass:(Class)arg1;
@property(retain) id <MySpinKeyboardProtocol> currentKeyboard;
- (void)dealloc;
- (id)init;

@end

