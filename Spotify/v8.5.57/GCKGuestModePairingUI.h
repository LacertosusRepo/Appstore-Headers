//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GCKGuestModePairingUIDelegate;

@interface GCKGuestModePairingUI : NSObject
{
    id <GCKGuestModePairingUIDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKGuestModePairingUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidCancel;
- (void)notifyShouldStopListeningForAudioPIN;
- (void)notifyShouldStartListeningForAudioPIN;
- (void)notifyDidInputPIN:(id)arg1;
- (void)handleFailureWithReason:(id)arg1;
- (void)handleClose;
- (void)showPairingUIWithSupportedOptions:(long long)arg1;

@end

