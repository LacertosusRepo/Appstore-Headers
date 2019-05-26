//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SPTShareEntityData;

@interface SPTShareData : NSObject
{
    id <SPTShareEntityData> _entityData;
    NSURL *_currentlyPlayingTrackURI;
    NSString *_shareSessionID;
}

@property(readonly, nonatomic) NSString *shareSessionID; // @synthesize shareSessionID=_shareSessionID;
@property(readonly, nonatomic) NSURL *currentlyPlayingTrackURI; // @synthesize currentlyPlayingTrackURI=_currentlyPlayingTrackURI;
@property(readonly, nonatomic) id <SPTShareEntityData> entityData; // @synthesize entityData=_entityData;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 currentlyPlayingTrackURI:(id)arg2 shareSessionID:(id)arg3;
- (id)itemDescription;
- (id)bodyString;
- (id)lineAppBody;
- (id)whatsAppBody;
- (id)mailBody;
- (id)mailSubject;

@end
