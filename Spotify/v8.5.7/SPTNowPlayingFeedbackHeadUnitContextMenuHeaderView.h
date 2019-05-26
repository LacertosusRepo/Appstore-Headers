//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTContextMenuHeader-Protocol.h"

@class NSString, NSURL, UIImageView, UILabel;

@interface SPTNowPlayingFeedbackHeadUnitContextMenuHeaderView : UIView <SPTContextMenuHeader>
{
    NSURL *_headerImageURL;
    NSString *_title;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
}

@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (double)preferredHeight;
- (struct CGSize)preferredImageSize;
- (id)initWithFrame:(struct CGRect)arg1 headerImageURL:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadata:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

