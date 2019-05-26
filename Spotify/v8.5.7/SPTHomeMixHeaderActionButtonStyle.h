//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTHomeMixHeaderActionButtonStyle : NSObject <GLUEDebuggableStyle>
{
    _Bool _clipToBounds;
    NSString *_debugName;
    long long _normalIcon;
    long long _selectedIcon;
    UIColor *_normalIconColor;
    UIColor *_selectedIconColor;
    UIColor *_normalBackgroundColor;
    UIColor *_selectedBackgroundColor;
    double _cornerRadius;
    struct CGSize _size;
    struct CGSize _iconSize;
}

@property(nonatomic) _Bool clipToBounds; // @synthesize clipToBounds=_clipToBounds;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *selectedIconColor; // @synthesize selectedIconColor=_selectedIconColor;
@property(retain, nonatomic) UIColor *normalIconColor; // @synthesize normalIconColor=_normalIconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(nonatomic) long long normalIcon; // @synthesize normalIcon=_normalIcon;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

