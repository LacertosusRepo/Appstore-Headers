//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoader;

@interface SPTCarmageddonFeedbackLoader : NSObject
{
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)createRequestWithDetectionResult:(id)arg1 userResponse:(unsigned long long)arg2;
- (void)deliverCarmageddonSurveyUserResponse:(unsigned long long)arg1 forDetectionResult:(id)arg2;
- (id)initWithDataLoader:(id)arg1;

@end

