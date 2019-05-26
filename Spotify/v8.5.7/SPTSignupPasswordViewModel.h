//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginSplitEmailSignupViewLogger, SPTSignupPasswordFieldValidationViewModel, SPTSignupUserInfoModel;
@protocol SPTNavigationRouter;

@interface SPTSignupPasswordViewModel : NSObject
{
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTSignupPasswordFieldValidationViewModel *_fieldViewModel;
    id <SPTNavigationRouter> _navigationRouter;
}

@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) SPTSignupPasswordFieldValidationViewModel *fieldViewModel; // @synthesize fieldViewModel=_fieldViewModel;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)openNextScreenWithPassword:(id)arg1;
- (void)userDidTapNextButtonWithValue:(id)arg1;
- (void)userDidTapReturnButtonWithValue:(id)arg1;
- (void)userDidUpdateTextFieldWithValue:(id)arg1;
- (void)setFieldValidationHandlerDelegate:(id)arg1;
- (id)userEmail;
- (id)previouslySelectedPassword;
- (id)nextButtonText;
- (id)fieldDisclosureLabelText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
- (id)initWithLogger:(id)arg1 userInfoModel:(id)arg2 fieldViewModel:(id)arg3 navigationRouter:(id)arg4;

@end
