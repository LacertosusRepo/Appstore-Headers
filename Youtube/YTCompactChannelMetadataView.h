//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YTFormattedStringLabel;

@interface YTCompactChannelMetadataView : UIView
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_videoCountLabel;
    YTFormattedStringLabel *_subscriberCountLabel;
}

- (void).cxx_destruct;
- (void)sizeLabelsWithWidth:(double)arg1;
- (void)setSubscriberCountText:(id)arg1;
- (void)setVideoCountText:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end
