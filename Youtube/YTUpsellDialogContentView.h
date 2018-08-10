//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YTFormattedStringLabel, YTImageView;

@interface YTUpsellDialogContentView : UIView
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_textLabel;
    YTImageView *_foregroundImage;
    YTImageView *_backgroundImage;
    double _foregroundImageWidth;
    UIView *_headerClippingView;
}

@property(readonly, nonatomic) YTImageView *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(readonly, nonatomic) YTImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 text:(id)arg2 backgroundImage:(id)arg3 foregroundImage:(id)arg4;

@end

