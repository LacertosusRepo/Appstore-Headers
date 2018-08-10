//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSString, UIColor;

@interface GLUEAccessoryIconViewStyle : NSObject <GLUEStyle>
{
    long long _icon;
    UIColor *_iconColor;
    struct CGSize _size;
}

+ (id)iconImageForIcon:(long long)arg1 usingStyle:(id)arg2;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAccessoryIconViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)iconImage;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
