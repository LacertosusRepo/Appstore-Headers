//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSettingsDataSource-Protocol.h"

@class NSString, NSUserDefaults;
@protocol SPTClientSettings, SPTLocalSettings, SPTPreferences, SPTProductState;

@interface SPTSettingsDataSourceImplementation : NSObject <SPTSettingsDataSource>
{
    NSUserDefaults *_userDefaults;
    id <SPTLocalSettings> _localSettings;
    id <SPTClientSettings> _clientSettings;
    id <SPTPreferences> _preferences;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1 localSettings:(id)arg2 clientSettings:(id)arg3 preferences:(id)arg4 productState:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

