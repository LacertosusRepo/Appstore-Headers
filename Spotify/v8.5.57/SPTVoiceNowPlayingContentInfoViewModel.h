//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingEntityDecorationControllerObserver-Protocol.h"

@class NSString, SPTNowPlayingEntityDecorationController, SPTVoiceCommand;
@protocol SPTVoiceNowPlayingContentInfoViewModelDelegate;

@interface SPTVoiceNowPlayingContentInfoViewModel : NSObject <SPTNowPlayingEntityDecorationControllerObserver>
{
    _Bool _entityNameHidden;
    _Bool _entityDescriptionHidden;
    id <SPTVoiceNowPlayingContentInfoViewModelDelegate> _delegate;
    NSString *_entityName;
    NSString *_entityDescription;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    SPTVoiceCommand *_mostRecentCommand;
}

@property(retain, nonatomic) SPTVoiceCommand *mostRecentCommand; // @synthesize mostRecentCommand=_mostRecentCommand;
@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(nonatomic) _Bool entityDescriptionHidden; // @synthesize entityDescriptionHidden=_entityDescriptionHidden;
@property(nonatomic) _Bool entityNameHidden; // @synthesize entityNameHidden=_entityNameHidden;
@property(copy, nonatomic) NSString *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(nonatomic) __weak id <SPTVoiceNowPlayingContentInfoViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)updateViewModelState;
- (void)updateViewModelStateWithVoiceCommand:(id)arg1;
- (void)updateViewModelWithPlayerState:(id)arg1;
- (void)dealloc;
- (id)initWithDecorationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

