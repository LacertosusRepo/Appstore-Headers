//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString;

@interface SPTAssistedCurationInfoView : UIView <GLUEStyleable>
{
    UIView *_container;
    GLUELabel *_messageLabel;
    GLUELabel *_subMessageLabel;
    NSLayoutConstraint *_spacingConstraint;
    NSLayoutConstraint *_messageLeftConstraint;
    NSLayoutConstraint *_messageRightConstraint;
    NSLayoutConstraint *_subMessageLeftConstraint;
    NSLayoutConstraint *_subMessageRightConstraint;
    double _spacing;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(retain, nonatomic) NSLayoutConstraint *subMessageRightConstraint; // @synthesize subMessageRightConstraint=_subMessageRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subMessageLeftConstraint; // @synthesize subMessageLeftConstraint=_subMessageLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageRightConstraint; // @synthesize messageRightConstraint=_messageRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageLeftConstraint; // @synthesize messageLeftConstraint=_messageLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *spacingConstraint; // @synthesize spacingConstraint=_spacingConstraint;
@property(retain, nonatomic) GLUELabel *subMessageLabel; // @synthesize subMessageLabel=_subMessageLabel;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) NSString *subMessage;
@property(copy, nonatomic) NSString *message;
- (void)addConstraints;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

