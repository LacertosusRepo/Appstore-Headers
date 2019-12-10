//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMLayout, NSString, UILabel, UIView;

@interface IMBrowseErrorCollectionViewCell : UICollectionViewCell
{
    UILabel *messageLabel;
    UILabel *descriptionLabel;
    UIView *separator;
    IMLayout *layout;
    double verticalMargin;
    double horizontalMargin;
    double spacing;
}

@property(nonatomic) double spacing; // @synthesize spacing;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDescription;
@property(retain, nonatomic) NSString *errorMessage;
- (double)cellHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

