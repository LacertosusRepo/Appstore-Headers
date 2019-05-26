//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponent.h"

#import "EXP_HUBComponent-Protocol.h"

@class NSSet;

@interface SPTHomeUICardComponent : EXP_HUGSThemableComponent <EXP_HUBComponent>
{
    unsigned long long _type;
    long long _textAlignment;
}

@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 type:(unsigned long long)arg2 textAlignment:(long long)arg3;

@end

