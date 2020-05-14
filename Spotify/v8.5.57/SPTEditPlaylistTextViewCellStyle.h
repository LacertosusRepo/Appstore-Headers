//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, GLUETableViewCellStyle, NSString, SPTEditPlaylistTextInputStyle;

@interface SPTEditPlaylistTextViewCellStyle : NSObject <GLUEStyle>
{
    GLUEButtonStyle *_buttonStyle;
    SPTEditPlaylistTextInputStyle *_textInputStyle;
    unsigned long long _maximumNumberOfCharacters;
    unsigned long long _characterCountThreshold;
    GLUELabelStyle *_counterStyle;
    GLUETableViewCellStyle *_basicCellStyle;
}

@property(copy, nonatomic) GLUETableViewCellStyle *basicCellStyle; // @synthesize basicCellStyle=_basicCellStyle;
@property(copy, nonatomic) GLUELabelStyle *counterStyle; // @synthesize counterStyle=_counterStyle;
@property(nonatomic) unsigned long long characterCountThreshold; // @synthesize characterCountThreshold=_characterCountThreshold;
@property(nonatomic) unsigned long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
@property(copy, nonatomic) SPTEditPlaylistTextInputStyle *textInputStyle; // @synthesize textInputStyle=_textInputStyle;
@property(copy, nonatomic) GLUEButtonStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

