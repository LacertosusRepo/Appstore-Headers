//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDTableDelegate-Protocol.h"
#import "IDViewDelegate-Protocol.h"

@class IDRhmiConnectedAppsView, NSArray, NSSet, NSString;
@protocol IDRhmiConnectedAppsViewControllerDelegate;

@interface IDRhmiConnectedAppsViewController : NSObject <IDViewDelegate, IDTableDelegate>
{
    IDRhmiConnectedAppsView *_view;
    long long _hmiLanguage;
    id <IDRhmiConnectedAppsViewControllerDelegate> _delegate;
    NSSet *_connectedBundleIdentifiers;
    NSArray *_connectedFeatureInfos;
    NSString *_selectedBundleIdentifier;
}

@property(retain, nonatomic) NSString *selectedBundleIdentifier; // @synthesize selectedBundleIdentifier=_selectedBundleIdentifier;
@property(retain, nonatomic) NSArray *connectedFeatureInfos; // @synthesize connectedFeatureInfos=_connectedFeatureInfos;
@property(retain, nonatomic) NSSet *connectedBundleIdentifiers; // @synthesize connectedBundleIdentifiers=_connectedBundleIdentifiers;
@property __weak id <IDRhmiConnectedAppsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long hmiLanguage; // @synthesize hmiLanguage=_hmiLanguage;
@property(readonly) IDRhmiConnectedAppsView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)updateConnectedApplicationListWithBundleIdentifiers:(id)arg1;
- (id)connectedFeatureInfoListWithBundleIdentifiers:(id)arg1;
- (id)composedFeatureInfoFromFeatureInfoSet:(id)arg1;
- (void)updateUI;
- (void)updateConnectedBundleIdentifiers:(id)arg1;
- (void)showWithFeatureInfo:(id)arg1;
- (void)show;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

