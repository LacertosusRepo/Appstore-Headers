//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEAccessoryIconButtonStyle, NSString;

@interface GLUEAccessoryIconButton : UIButton <GLUEStyleable>
{
    long long _icon;
    GLUEAccessoryIconButtonStyle *_style;
}

@property(copy, nonatomic) GLUEAccessoryIconButtonStyle *style; // @synthesize style=_style;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateIconWithStyle:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

