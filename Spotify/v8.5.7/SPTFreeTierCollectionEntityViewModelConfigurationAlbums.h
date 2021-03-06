//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionEntityViewModelConfiguration-Protocol.h"

@class NSString;
@protocol SPTFreeTierCollectionTestManager, SPTLocalSettings;

@interface SPTFreeTierCollectionEntityViewModelConfigurationAlbums : NSObject <SPTFreeTierCollectionEntityViewModelConfiguration>
{
    _Bool _collapsed;
    id <SPTLocalSettings> _localSettings;
    id <SPTFreeTierCollectionTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long trailingAccessoryType;
- (void)persistCollapsed:(_Bool)arg1 forSection:(long long)arg2;
- (_Bool)showHeaderForSection:(unsigned long long)arg1;
- (_Bool)collapsedSection:(long long)arg1;
- (id)subtitleForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (_Bool)showSectionInModalMode:(unsigned long long)arg1;
- (id)initWithLocalSettings:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

