//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Touch_IAC_10 : NSObject
{
    unsigned char _touchType;
    int _positionX;
    int _positionY;
    unsigned int _uniqueID;
}

@property unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property int positionY; // @synthesize positionY=_positionY;
@property int positionX; // @synthesize positionX=_positionX;
@property unsigned char touchType; // @synthesize touchType=_touchType;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end
