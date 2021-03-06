//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTPodcastEpisodeDescriptionTextViewStyle : NSObject <GLUEStyle>
{
    UIFont *_font;
    UIFont *_collapsedEndingFont;
    UIColor *_textColor;
    UIColor *_tintColor;
}

@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *collapsedEndingFont; // @synthesize collapsedEndingFont=_collapsedEndingFont;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

