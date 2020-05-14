//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEButtonStyle, NSString, UIImage;
@protocol VISREFActionRowButtonViewModel;

@protocol VISREFActionRowButtonViewModelDelegate <NSObject>
@property(retain, nonatomic) id <VISREFActionRowButtonViewModel> viewModel;
- (void)updateAccessibilityLabel:(NSString *)arg1;
- (void)updateEnabledState:(_Bool)arg1;
- (void)updateSelectedState:(_Bool)arg1 userInitiated:(_Bool)arg2;

@optional
- (void)updateStyle:(GLUEButtonStyle *)arg1;
- (void)updateIcon:(UIImage *)arg1;
- (void)updateTitle:(NSString *)arg1;
@end
