//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEAccessoryIconButton, GLUEImageView, NSString;

@interface SPTSocialListeningSessionScannableView : UIView <GLUEStyleable>
{
    GLUEImageView *_scannableImageView;
    GLUEAccessoryIconButton *_shareCodeButton;
    UIView *_scannableContainerView;
    UIView *_separatorView;
}

@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIView *scannableContainerView; // @synthesize scannableContainerView=_scannableContainerView;
@property(readonly, nonatomic) GLUEAccessoryIconButton *shareCodeButton; // @synthesize shareCodeButton=_shareCodeButton;
@property(readonly, nonatomic) GLUEImageView *scannableImageView; // @synthesize scannableImageView=_scannableImageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
