//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEButtonStyle, NSString, UIImage;

@protocol VISREFActionRowButtonViewModelDelegate <NSObject>
- (void)updateStyle:(GLUEButtonStyle *)arg1;
- (void)updateIcon:(UIImage *)arg1;
- (void)updateEnabledState:(_Bool)arg1;
- (void)updateSelectedState:(_Bool)arg1;
- (void)updateAccessibilityLabel:(NSString *)arg1;
- (void)updateTitle:(NSString *)arg1;
@end

