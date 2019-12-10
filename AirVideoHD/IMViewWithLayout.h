//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMLayout;

@interface IMViewWithLayout : UIView
{
    IMLayout *layout;
    struct CGSize lastIntrinsicSize;
    double preferredMaxLayoutWidth;
    double preferredMaxLayoutHeight;
}

@property(nonatomic) double preferredMaxLayoutHeight; // @synthesize preferredMaxLayoutHeight;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) IMLayout *layout;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
