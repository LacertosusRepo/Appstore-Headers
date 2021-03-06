//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTVideoSeekEvent : NSObject
{
    double _fromPosition;
    double _toPosition;
}

@property(nonatomic) double toPosition; // @synthesize toPosition=_toPosition;
@property(nonatomic) double fromPosition; // @synthesize fromPosition=_fromPosition;
@property(readonly, nonatomic) double seekLength;
@property(readonly, nonatomic) _Bool isForwardSeek;
- (id)initWithFromPosition:(double)arg1 toPosition:(double)arg2;

@end

