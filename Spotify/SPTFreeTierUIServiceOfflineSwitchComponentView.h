//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewObserver.h"
#import "EXP_HUBComponentViewWithEvents.h"
#import "SPTViewOfflineSwitchDelegate.h"

@class NSString, SPTLayoutConstraintBuilder, SPTViewOfflineSwitch;

@interface SPTFreeTierUIServiceOfflineSwitchComponentView : EXP_HUBComponentView <SPTViewOfflineSwitchDelegate, EXP_HUBComponentViewObserver, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    SPTViewOfflineSwitch *_offlineSwitchView;
    SPTLayoutConstraintBuilder *_layoutContraintBuilder;
    unsigned long long _offlineAvailability;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutContraintBuilder; // @synthesize layoutContraintBuilder=_layoutContraintBuilder;
@property(readonly, nonatomic) SPTViewOfflineSwitch *offlineSwitchView; // @synthesize offlineSwitchView=_offlineSwitchView;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (unsigned long long)offlineSwitchViewOfflineAvailability:(id)arg1;
- (void)offlineSwitchViewDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)configureAutolayouts;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 productState:(id)arg3 modalPresentationController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
