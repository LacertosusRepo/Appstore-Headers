//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIColor;

@protocol YTColorStyle <NSObject>
@property(retain, nonatomic) UIColor *navBarThemeColorOverride;
@property(nonatomic) _Bool themeColorChangeEnabled;
@property(readonly, nonatomic) UIColor *conversationBackgroundColor;
@property(readonly, nonatomic) UIColor *innerTubeCollectionViewBackgroundColor;
@property(readonly, nonatomic) UIColor *tabsBackgroundColor;
@property(readonly, nonatomic) UIColor *titleBarTextColor;
@property(readonly, nonatomic) UIColor *titleBarColor;
- (void)removeObserver:(id <YTColorObserver>)arg1;
- (void)addObserver:(id <YTColorObserver>)arg1;
- (void)setThemeColor:(UIColor *)arg1 titleColor:(UIColor *)arg2 animated:(_Bool)arg3;
- (UIColor *)reportFormSubmitButtonDisabledColor;
- (UIColor *)reportFormSubOptionsUnderlineColor;
- (UIColor *)reportFormSubOptionsDisclosureArrowColor;
- (UIColor *)reportFormRadioButtonColorWithSelected:(_Bool)arg1;
- (UIColor *)reportFormDividerColor;
- (UIColor *)reportFormCheckboxColor;
- (UIColor *)reportFormFooterTextColor;
- (UIColor *)reportFormTextColor;
- (UIColor *)reportFormDialogBackgroundColor;
- (UIColor *)activityDotBorderColor;
- (UIColor *)activityDotColor;
- (UIColor *)pivotBarItemTitleColorWithSelected:(_Bool)arg1;
- (UIColor *)pivotBarItemIconColorWithSelected:(_Bool)arg1;
- (UIColor *)pivotBarItemInkColor;
- (UIColor *)pivotBarSeparatorColor;
- (UIColor *)pivotBarBackgroundColor;
- (void)setThemeColor:(UIColor *)arg1 animated:(_Bool)arg2;
- (UIColor *)themeIconColor;
- (UIColor *)themeTitleColor;
- (UIColor *)themeColor;
- (UIColor *)navBarThemeColor;
- (UIColor *)darkForegroundIconColorForBackgroundColor:(UIColor *)arg1;
- (UIColor *)darkForegroundColorForBackgroundColor:(UIColor *)arg1;
- (UIColor *)tabActiveSelectionColorForStyleContext:(NSString *)arg1;
- (UIColor *)tabTitleBackgroundColorForStyleContext:(NSString *)arg1;
- (NSDictionary *)tabTitleTextColorsForStyleContext:(NSString *)arg1;
- (long long)navigationBarStyleForStyleContext:(NSString *)arg1;
- (UIColor *)navigationBarSeparatorColorForStyleContext:(NSString *)arg1;
- (UIColor *)navigationBarIconColorForStyleContext:(NSString *)arg1;
- (UIColor *)navigationBarTitleColorForStyleContext:(NSString *)arg1;
- (UIColor *)navigationBarColorForStyleContext:(NSString *)arg1;
@end

