//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTVideoPlayRange : NSObject
{
    double _position;
    double _length;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithNewStartPosition:(double)arg1;
- (void)endAtPosition:(double)arg1;
- (id)initWithStartPosition:(double)arg1;

@end

