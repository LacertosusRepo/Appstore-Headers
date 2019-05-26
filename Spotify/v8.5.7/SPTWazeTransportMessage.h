//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SPTWazeTransportMessage : NSObject
{
    _Bool _drivingOnLeft;
    NSNumber *_eta;
    NSNumber *_distance;
    NSString *_distanceDisplay;
    NSNumber *_exitNumber;
    long long _instruction;
}

@property(readonly, nonatomic) long long instruction; // @synthesize instruction=_instruction;
@property(readonly, nonatomic) NSNumber *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(readonly, nonatomic, getter=isDrivingOnLeft) _Bool drivingOnLeft; // @synthesize drivingOnLeft=_drivingOnLeft;
@property(retain, nonatomic) NSString *distanceDisplay; // @synthesize distanceDisplay=_distanceDisplay;
@property(readonly, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSNumber *eta; // @synthesize eta=_eta;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

