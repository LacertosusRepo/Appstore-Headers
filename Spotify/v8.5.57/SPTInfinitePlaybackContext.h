//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTPlayerState;

@interface SPTInfinitePlaybackContext : NSObject
{
    NSURL *_URI;
    SPTPlayerState *_initiatingState;
}

@property(readonly, nonatomic) SPTPlayerState *initiatingState; // @synthesize initiatingState=_initiatingState;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)initWithURI:(id)arg1 initiatingState:(id)arg2;

@end

