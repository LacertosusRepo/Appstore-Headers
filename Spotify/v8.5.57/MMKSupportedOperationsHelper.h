//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMKSupportedOperationsHelper : NSObject
{
}

- (_Bool)isUnfavoriteSupported:(unsigned long long)arg1;
- (_Bool)isFavoriteSupported:(unsigned long long)arg1;
- (_Bool)isDisableRepeatSupported:(unsigned long long)arg1;
- (_Bool)isEnableRepeatAllSupported:(unsigned long long)arg1;
- (_Bool)isEnableRepeatOneSupported:(unsigned long long)arg1;
- (_Bool)isDisableShuffleSupported:(unsigned long long)arg1;
- (_Bool)isEnableShuffleSupported:(unsigned long long)arg1;
- (_Bool)isSetSeekPositionSupported:(unsigned long long)arg1;
- (_Bool)isAdjustSeekPositionSupported:(unsigned long long)arg1;
- (_Bool)isFastForwardSupported:(unsigned long long)arg1;
- (_Bool)isRewindSupported:(unsigned long long)arg1;
- (_Bool)isStartOverSupported:(unsigned long long)arg1;
- (_Bool)isNextSupported:(unsigned long long)arg1;
- (_Bool)isPreviousSupported:(unsigned long long)arg1;
- (_Bool)isStopSupported:(unsigned long long)arg1;
- (_Bool)isPauseSupported:(unsigned long long)arg1;
- (_Bool)isPlaySupported:(unsigned long long)arg1;
- (_Bool)isEveryOperationSupported:(unsigned long long)arg1;
- (unsigned long long)convertFromUInt32:(unsigned int)arg1;
- (unsigned int)convertToUInt32:(unsigned long long)arg1;

@end
