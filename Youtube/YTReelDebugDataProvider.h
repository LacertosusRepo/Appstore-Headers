//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe;

@interface YTReelDebugDataProvider : NSObject
{
    _Bool _hasReelsOnHomeImpression;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateFeedbackConfiguration:(id)arg1;
- (void)setReelsOnHomeImpression;

@end

