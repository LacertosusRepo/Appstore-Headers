//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, SPTPodcastSectionDescriptionTextView;
@protocol GLUETheme, SPTPodcastDescriptionTableViewCellDelegate;

@interface SPTPodcastDescriptionSectionTableViewCell : SPTPodcastSectionTableViewCell <UITextViewDelegate>
{
    id <SPTPodcastDescriptionTableViewCellDelegate> _delegate;
    SPTPodcastSectionDescriptionTextView *_descriptionTextView;
    id <GLUETheme> _glueTheme;
}

@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTPodcastSectionDescriptionTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) __weak id <SPTPodcastDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setupConstraints;
- (void)setupUI;
- (void)updateWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
