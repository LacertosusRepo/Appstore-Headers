//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol SPTNowPlayingLyricsButtonViewDelegate;

@interface SPTNowPlayingLyricsButtonView : UIView
{
    _Bool _selected;
    _Bool _isActive;
    id <SPTNowPlayingLyricsButtonViewDelegate> _delegate;
    UIButton *_lyricsButton;
}

@property(retain, nonatomic) UIButton *lyricsButton; // @synthesize lyricsButton=_lyricsButton;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <SPTNowPlayingLyricsButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)updateButtonSelectedState;
- (void)setupLyricsButton;
- (void)setupUI;
- (id)init;

@end

