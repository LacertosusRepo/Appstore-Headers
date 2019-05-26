//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeDescriptionTextViewStyle;

@interface SPTPodcastEpisodeDescriptionTextView : UITextView <GLUEStyleable>
{
    _Bool _needsTextViewLayout;
    NSURL *_episodeURL;
    double _episodeDuration;
    NSString *_originalText;
    double _lineHeight;
    SPTPodcastEpisodeDescriptionTextViewStyle *_style;
}

@property(retain, nonatomic) SPTPodcastEpisodeDescriptionTextViewStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool needsTextViewLayout; // @synthesize needsTextViewLayout=_needsTextViewLayout;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) double episodeDuration; // @synthesize episodeDuration=_episodeDuration;
@property(copy, nonatomic) NSURL *episodeURL; // @synthesize episodeURL=_episodeURL;
- (void).cxx_destruct;
- (id)collapsedStringEnding;
- (void)glue_applyStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

