//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTKeyframeGroup, NSString;

@interface LOTShapeFill : NSObject
{
    _Bool _fillEnabled;
    _Bool _evenOddFillRule;
    NSString *_keyname;
    LOTKeyframeGroup *_color;
    LOTKeyframeGroup *_opacity;
}

@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *color; // @synthesize color=_color;
@property(readonly, nonatomic) _Bool fillEnabled; // @synthesize fillEnabled=_fillEnabled;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

