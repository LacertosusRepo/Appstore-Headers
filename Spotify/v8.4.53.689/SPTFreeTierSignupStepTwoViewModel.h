//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierSignupViewModel.h"

@class NSDictionary, NSString, SPTFreeTierLoginTheme, SPTFreeTierSignupStepTwoViewLogger, SPTFreeTierSignupUserInfoModel;

@interface SPTFreeTierSignupStepTwoViewModel : NSObject <SPTFreeTierSignupViewModel>
{
    NSDictionary *_validators;
    id <SPTFreeTierSignupStepTwoViewModelDelegate> _delegate;
    SPTFreeTierSignupStepTwoViewLogger *_logger;
    id <SPTNavigationRouter> _navigationRouter;
    SPTFreeTierSignupUserInfoModel *_userInfoModel;
    SPTFreeTierLoginTheme *_theme;
}

@property(retain, nonatomic) SPTFreeTierLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTFreeTierSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) SPTFreeTierSignupStepTwoViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierSignupStepTwoViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (_Bool)isEnoughDataToCreateAccount;
- (void)setBirthDate:(id)arg1;
- (id)selectedBirthDate;
- (void)setGenderForIndex:(long long)arg1;
- (long long)indexForSelectedGender;
- (id)serverParamsGenderOptions;
- (id)availableGenders;
- (id)submitButtonText;
- (id)genderLabelText;
- (id)birthDateLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (void)presentNextStepViewController;
- (void)validateFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (id)initWithUserInfoModel:(id)arg1 navigationRouter:(id)arg2 theme:(id)arg3 validators:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
