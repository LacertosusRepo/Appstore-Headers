//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OnePasswordExtension : NSObject
{
}

+ (id)failedToObtainURLStringFromWebViewError;
+ (id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1;
+ (id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2;
+ (id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1;
+ (id)failedToContactExtensionErrorWithActivityError:(id)arg1;
+ (id)extensionCancelledByUserError;
+ (id)systemAppExtensionAPINotAvailableError;
+ (id)sharedExtension;
- (void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createExtensionItemForURLString:(id)arg1 webPageDetails:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)activityViewControllerForItem:(id)arg1 viewController:(id)arg2 sender:(id)arg3 typeIdentifier:(id)arg4;
- (void)processExtensionItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fillItemIntoUIWebView:(id)arg1 webViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 sender:(id)arg4 withWebView:(id)arg5 showOnlyLogins:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)isSystemAppExtensionAPIAvailable;
- (void)fillReturnedItems:(id)arg1 intoWebView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createExtensionItemForWebView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isOnePasswordExtensionActivityType:(id)arg1;
- (void)fillItemIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changePasswordForLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isAppExtensionAvailable;

@end

