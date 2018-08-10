//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierEducationSnackBarPresenter.h"

@class NSString, SPTFreeTierEducationPersistentCounter;

@interface SPTFreeTierEducationSnackbarPresenterImplementation : NSObject <SPTFreeTierEducationSnackBarPresenter>
{
    id <SPTSnackbarPresenter> _snackbarPresenter;
    SPTFreeTierEducationPersistentCounter *_persistentCounter;
}

@property(retain, nonatomic) SPTFreeTierEducationPersistentCounter *persistentCounter; // @synthesize persistentCounter=_persistentCounter;
@property(retain, nonatomic) id <SPTSnackbarPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
- (void).cxx_destruct;
- (_Bool)shouldSkipPresentation;
- (void)presentSnackbarWithIdentifier:(id)arg1 message:(id)arg2 actionButtonTitle:(id)arg3 maxNumberOfTimes:(unsigned long long)arg4 skipFirstNTimes:(unsigned long long)arg5 actionBlock:(CDUnknownBlockType)arg6;
- (void)presentSnackbarWithIdentifier:(id)arg1 message:(id)arg2 actionButtonIcon:(long long)arg3 maxNumberOfTimes:(unsigned long long)arg4 skipFirstNTimes:(unsigned long long)arg5 actionBlock:(CDUnknownBlockType)arg6;
- (_Bool)shouldPresentWithPresentationCount:(unsigned long long)arg1 maxPresentationCount:(unsigned long long)arg2 skipFirstNTimes:(unsigned long long)arg3;
- (id)initWithPersistentCounter:(id)arg1 snackbarPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
