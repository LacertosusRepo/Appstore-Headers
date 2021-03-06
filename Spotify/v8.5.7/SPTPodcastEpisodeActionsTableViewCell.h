//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUEAccessoryIconButton, GLUEButton, UIStackView, UIView;
@protocol SPTPodcastUIDownloadButton;

@interface SPTPodcastEpisodeActionsTableViewCell : UITableViewCell
{
    GLUEButton *_mainActionButton;
    GLUEAccessoryIconButton *_shareButton;
    GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *_downloadButton;
    UIView *_mainActionContainer;
    UIStackView *_secondaryActionsStackView;
}

@property(retain, nonatomic) UIStackView *secondaryActionsStackView; // @synthesize secondaryActionsStackView=_secondaryActionsStackView;
@property(retain, nonatomic) UIView *mainActionContainer; // @synthesize mainActionContainer=_mainActionContainer;
@property(retain, nonatomic) GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) GLUEAccessoryIconButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) GLUEButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
- (void).cxx_destruct;
- (id)initWithGlueTheme:(id)arg1 buttonsFactory:(id)arg2;

@end

