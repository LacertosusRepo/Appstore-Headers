//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTLoginCodeChallengeInfo : NSObject
{
    unsigned long long _codeLength;
    double _timeToLiveSeconds;
    NSString *_canonicalPhoneNumber;
}

@property(copy, nonatomic) NSString *canonicalPhoneNumber; // @synthesize canonicalPhoneNumber=_canonicalPhoneNumber;
@property(nonatomic) double timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;
@property(nonatomic) unsigned long long codeLength; // @synthesize codeLength=_codeLength;
- (void).cxx_destruct;
- (id)initWithCodeLength:(unsigned long long)arg1 timeToLiveSeconds:(double)arg2 canonicalPhoneNumber:(id)arg3;

@end

