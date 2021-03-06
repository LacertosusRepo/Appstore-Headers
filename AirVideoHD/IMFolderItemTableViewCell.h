//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMItemTableViewCell.h"

@class IMLayout, UIImageView, UILabel;

@interface IMFolderItemTableViewCell : IMItemTableViewCell
{
    UIImageView *icon;
    UILabel *title;
    IMLayout *layout;
    double textMarginLeft;
    double textMarginRight;
    double horizontalSpacing;
}

@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing;
@property(nonatomic) double textMarginRight; // @synthesize textMarginRight;
@property(nonatomic) double textMarginLeft; // @synthesize textMarginLeft;
- (void).cxx_destruct;
- (void)itemChanged;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

