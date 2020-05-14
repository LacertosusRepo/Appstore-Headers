//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeEventEmitter-Protocol.h"
#import "SPTVolumeSystemPopupHider-Protocol.h"

@class MPVolumeView, NSString, UIApplication;
@protocol SPTVolumeEventReceiver;

@interface SPTVolumeSystemPopupHideEmitter : NSObject <SPTVolumeEventEmitter, SPTVolumeSystemPopupHider>
{
    _Bool _systemHUDDisabled;
    _Bool _isDisabling;
    id <SPTVolumeEventReceiver> delegate;
    UIApplication *_application;
    MPVolumeView *_systemVolumeView;
}

@property(nonatomic) _Bool isDisabling; // @synthesize isDisabling=_isDisabling;
@property(nonatomic) _Bool systemHUDDisabled; // @synthesize systemHUDDisabled=_systemHUDDisabled;
@property(retain, nonatomic) MPVolumeView *systemVolumeView; // @synthesize systemVolumeView=_systemVolumeView;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableSystemVolumeHUD;
- (void)disableSystemVolumeHUDWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

