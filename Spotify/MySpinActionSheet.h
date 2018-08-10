//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "MySpinActionSheetDelegate.h"
#import "MySpinFocusControlDelegate.h"

@class NSMutableArray, NSString, UIColor, UIScrollView, UIView;

@interface MySpinActionSheet : UIWindow <MySpinFocusControlDelegate, MySpinActionSheetDelegate>
{
    id <MySpinActionSheetDelegate> _mySpinActionSheetDelegate;
    NSMutableArray *allButtons;
    NSMutableArray *allButtonsInfoArray;
    NSString *cancelButtonTitleMySpinActionSheet;
    NSString *destructiveButtonTitleMySpinActionSheet;
    _Bool shouldCreateScrollBar;
    UIView *baseView;
    UIScrollView *buttonsContainerView;
    double horizontalSpacing;
    double verticalSpacing;
    double horizontalPadding;
    double verticalPadding;
    double separatorHeight;
    double textSize;
    double elementsHeight;
    double scrollbarWidth;
    double elementsX;
    double elementsWidth;
    UIColor *buttonTitleColor;
    UIColor *buttonSubtitleColor;
    UIColor *destructiveButtonTitleColor;
    UIColor *destructiveButtonTintColor;
    UIColor *labelTextColor;
    UIColor *buttonBackgroundColor;
    UIColor *buttonBackgroundColorHighlighted;
    UIColor *specialButtonBackgroundColor;
    UIColor *specialButtonBackgroundColorHighlighted;
    UIColor *sheetBackgroundColor;
    UIColor *titleBackgroundColor;
    struct CGRect destructiveButtonRect;
    struct CGRect cancelButtonRect;
    struct CGRect scrollViewRect;
    struct CGRect scrollbarRect;
    struct CGRect sheetRect;
    struct CGSize contentSize;
    struct CGRect titleRect;
    struct CGSize otherButtonSize;
    long long highlightedButtonIndex;
    NSString *_title;
}

+ (id)mySpinActionSheetArray;
+ (id)defaultInfoDictionaryForTitle:(id)arg1 andStyle:(id)arg2;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) id <MySpinActionSheetDelegate> mySpinActionSheetDelegate; // @synthesize mySpinActionSheetDelegate=_mySpinActionSheetDelegate;
- (void).cxx_destruct;
- (void)setFocusHighlight:(_Bool)arg1 forButton:(id)arg2;
- (void)handleFocusEvent:(id)arg1;
- (id)allButtons;
- (void)unregisterMySpinActionSheet:(id)arg1;
- (void)registerMySpinActionSheet:(id)arg1;
- (void)sheetButtonClick:(id)arg1;
- (void)initializeUIViews;
- (void)createOtherButtonWithDictionary:(id)arg1;
- (double)heightForNumberOfElements:(long long)arg1;
- (void)updateFrames;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
@property(nonatomic) long long destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)show;
- (void)cancelMySpinActionSheet;
- (id)buttonInfoDictionaryAtIndex:(long long)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithInfoDictionary:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonsInfoDictionaries:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
@property(readonly, nonatomic) long long numberOfButtons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

