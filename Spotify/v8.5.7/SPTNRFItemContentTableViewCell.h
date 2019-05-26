//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUEImageView, GLUELabel, SPTRoundedCornerView, UIButton;

@interface SPTNRFItemContentTableViewCell : UITableViewCell
{
    GLUEImageView *_artworkImageView;
    GLUELabel *_titleLabel;
    GLUELabel *_ownerNameLabel;
    GLUELabel *_metadataLabel;
    UIButton *_playButton;
    SPTRoundedCornerView *_roundedContentView;
    SPTRoundedCornerView *_playButtonContainerView;
}

@property(retain, nonatomic) SPTRoundedCornerView *playButtonContainerView; // @synthesize playButtonContainerView=_playButtonContainerView;
@property(retain, nonatomic) SPTRoundedCornerView *roundedContentView; // @synthesize roundedContentView=_roundedContentView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) GLUELabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) GLUELabel *ownerNameLabel; // @synthesize ownerNameLabel=_ownerNameLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

