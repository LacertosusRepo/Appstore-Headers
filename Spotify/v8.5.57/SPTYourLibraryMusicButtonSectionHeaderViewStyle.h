//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, NSString;

@interface SPTYourLibraryMusicButtonSectionHeaderViewStyle : NSObject <GLUEStyle>
{
    GLUEButtonStyle *_sectionHeaderButtonStyle;
    double _height;
    double _buttonMargin;
}

@property(nonatomic) double buttonMargin; // @synthesize buttonMargin=_buttonMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) GLUEButtonStyle *sectionHeaderButtonStyle; // @synthesize sectionHeaderButtonStyle=_sectionHeaderButtonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

