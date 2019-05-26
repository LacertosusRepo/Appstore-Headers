//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdFeatureFlagChecks;
@protocol SPTLinkDispatcher, SPTLocalSettings;

@interface SPTAdVoicePermissions : NSObject
{
    id <SPTLocalSettings> _localSettings;
    SPTAdFeatureFlagChecks *_featureFlagChecker;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)handleDeepLinkURL:(id)arg1;
- (void)requestRecordPermissionIfNeeded;
- (_Bool)isVoiceAdPreferenceAllowed;
- (_Bool)isRecordingAllowed;
@property(readonly, nonatomic, getter=isVoiceAdAllowed) _Bool voiceAdAllowed;
- (id)initWithLocalSettings:(id)arg1 featureFlagChecker:(id)arg2 linkDispatcher:(id)arg3;

@end

