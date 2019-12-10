//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMItemPlaybackStateManager : NSObject
{
    id playbackEntryNotificationToken;
    id positionNotificationToken;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)markItemAsPlayed:(id)arg1;
- (void)markItemAsNew:(id)arg1;
- (int)stateForItem:(id)arg1;
- (int)stateForHistoryItem:(id)arg1;
- (void)notifyChange;
- (void)dealloc;
- (id)init;

@end
