//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GLUEAnimationVectorTransformer : NSObject
{
    NSMutableArray *_transformerArray;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *transformerArray; // @synthesize transformerArray=_transformerArray;
- (void).cxx_destruct;
- (id)transformForProgress:(double)arg1;
- (id)initWithFromValue:(id)arg1 toValue:(id)arg2 interpolator:(id)arg3;

@end

