//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEButton.h"

@class SPTBundlingBannerButtonViewModel;

@interface SPTBundlingBannerButton : GLUEButton
{
    SPTBundlingBannerButtonViewModel *_viewModel;
}

@property(retain, nonatomic) SPTBundlingBannerButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setupTitle;
- (void)setupStyle;
- (id)initWithViewModel:(id)arg1;

@end

