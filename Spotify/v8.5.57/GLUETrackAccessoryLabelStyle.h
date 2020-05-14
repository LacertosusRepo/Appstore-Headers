//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface GLUETrackAccessoryLabelStyle : NSObject <GLUEStyle>
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    double _cornerRadius;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTrackAccessoryLabelStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
