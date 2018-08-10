//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTImageViewContainer.h"
#import "YTReusableView.h"

@class NSString, YTFormattedStringLabel, YTImageView;

@interface YTVideoContributorView : UIView <YTImageViewContainer, YTReusableView>
{
    YTImageView *_contributorThumbnailView;
    YTFormattedStringLabel *_contributorNameLabel;
}

+ (double)contributorThumbnailSize;
+ (double)defaultPadding;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(readonly, nonatomic) YTImageView *imageView;
- (void)setContributorNameText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
