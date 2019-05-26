//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface SPTPaletteSwatch : NSObject <NSCopying>
{
    _Bool _textColorsGenerated;
    union SPTColor _titleTextColor;
    union SPTColor _bodyTextColor;
    union SPTColor _color;
    unsigned long long _population;
}

@property(nonatomic) _Bool textColorsGenerated; // @synthesize textColorsGenerated=_textColorsGenerated;
@property(readonly, nonatomic) unsigned long long population; // @synthesize population=_population;
@property(readonly, nonatomic) union SPTColor color; // @synthesize color=_color;
- (void)ensureTextColorsAreGenerated;
- (unsigned long long)hash;
- (_Bool)isEqualToSwatch:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) union SPTColor bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(readonly, nonatomic) union SPTColor titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (id)initWithColor:(union SPTColor)arg1 population:(unsigned long long)arg2;
@property(readonly, nonatomic) UIColor *bodyTextUIColor;
@property(readonly, nonatomic) UIColor *titleTextUIColor;
@property(readonly, copy, nonatomic) UIColor *uicolor;

@end
