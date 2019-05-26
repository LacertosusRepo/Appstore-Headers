//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTKeyframeGroup, NSString;

@interface LOTShapeRepeater : NSObject
{
    NSString *_keyname;
    LOTKeyframeGroup *_copies;
    LOTKeyframeGroup *_offset;
    LOTKeyframeGroup *_anchorPoint;
    LOTKeyframeGroup *_scale;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_rotation;
    LOTKeyframeGroup *_startOpacity;
    LOTKeyframeGroup *_endOpacity;
}

@property(readonly, nonatomic) LOTKeyframeGroup *endOpacity; // @synthesize endOpacity=_endOpacity;
@property(readonly, nonatomic) LOTKeyframeGroup *startOpacity; // @synthesize startOpacity=_startOpacity;
@property(readonly, nonatomic) LOTKeyframeGroup *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) LOTKeyframeGroup *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTKeyframeGroup *anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) LOTKeyframeGroup *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) LOTKeyframeGroup *copies; // @synthesize copies=_copies;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

