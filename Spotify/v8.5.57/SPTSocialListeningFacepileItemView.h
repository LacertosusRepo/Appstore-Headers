//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, GLUELabel;

@interface SPTSocialListeningFacepileItemView : UIView
{
    GLUELabel *_textLabel;
    GLUEImageView *_imageView;
}

@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)addViewConstraints;
- (void)setupImageView;
- (void)setupTextLabel;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
