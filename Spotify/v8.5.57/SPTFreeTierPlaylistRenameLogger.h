//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTUBILogger, SPTUBIMobileRenamePlaylistEventFactory;

@interface SPTFreeTierPlaylistRenameLogger : NSObject
{
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileRenamePlaylistEventFactory> _ubiEventFactory;
    NSURL *_playlistURL;
}

@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTUBIMobileRenamePlaylistEventFactory> ubiEventFactory; // @synthesize ubiEventFactory=_ubiEventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logCancelClicked;
- (void)logRenameClicked;
- (id)initWithUBIEventFactory:(id)arg1 ubiLogger:(id)arg2;

@end

