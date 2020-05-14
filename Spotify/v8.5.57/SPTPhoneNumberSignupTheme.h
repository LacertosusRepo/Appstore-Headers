//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class SPTPhoneNumberSignupCallingCodeContainerViewStyle, SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle, SPTPhoneNumberSignupValidateOtpContainerViewStyle;
@protocol GLUEStyle;

@interface SPTPhoneNumberSignupTheme : GLUEThemeBase
{
}

- (id)titleHeaderStyle;
- (id)nextButtonStyle;
- (id)createSearchBarStyle;
- (id)createCountrySelectorCellStyle;
- (id)createPhoneNumberEntryCellStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle<GLUEStyle> *enterPhoneNumberContainerViewStyle;
- (id)createCallingCodeTitleLabelStyle;
- (id)createCallingCodeCellStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupCallingCodeContainerViewStyle<GLUEStyle> *callingCodeContainerViewStyle;
- (id)createTextWithImageButtonStyleWithIcon:(long long)arg1;
- (id)createCodeInputFieldStyle;
- (id)createStackViewStyle;
- (id)createBannerViewStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *enterOneTimePasswordContainerViewStyle;

@end
