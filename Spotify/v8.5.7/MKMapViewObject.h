//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSAViewObject.h"

@class NSMutableArray;

@interface MKMapViewObject : MSAViewObject
{
    float _startDistance;
    int _lastEventType;
    NSMutableArray *touches;
    double _scaleFactor;
    double _deltaScaleFactor;
    struct CGPoint _startCenter;
    struct CGPoint _translationPoint;
}

@property(nonatomic) int lastEventType; // @synthesize lastEventType=_lastEventType;
@property(nonatomic) struct CGPoint translationPoint; // @synthesize translationPoint=_translationPoint;
@property(nonatomic) double deltaScaleFactor; // @synthesize deltaScaleFactor=_deltaScaleFactor;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) struct CGPoint startCenter; // @synthesize startCenter=_startCenter;
@property(nonatomic) float startDistance; // @synthesize startDistance=_startDistance;
@property(retain, nonatomic) NSMutableArray *touches; // @synthesize touches;
- (void).cxx_destruct;

@end

