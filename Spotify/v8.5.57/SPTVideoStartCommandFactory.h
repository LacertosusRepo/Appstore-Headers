//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BMPlaybackRequestFactory;

@interface SPTVideoStartCommandFactory : NSObject
{
    id <BMPlaybackRequestFactory> _requestFactory;
}

@property(retain, nonatomic) id <BMPlaybackRequestFactory> requestFactory; // @synthesize requestFactory=_requestFactory;
- (void).cxx_destruct;
- (_Bool)isSupportedMediaManifest:(id)arg1;
- (id)parseManifest:(id)arg1;
- (id)dateFromTimestampMS:(id)arg1;
- (id)metadataForVideoTrack:(id)arg1 playerOptions:(id)arg2 commandInitiatedAt:(id)arg3 isSystemInitialized:(_Bool)arg4 startReason:(id)arg5;
- (id)requestForVideoTrack:(id)arg1 playerOptions:(id)arg2 metadata:(id)arg3;
- (id)createStartCommandWithDictionary:(id)arg1;
- (id)initWithPlaybackRequestFactory:(id)arg1;

@end

