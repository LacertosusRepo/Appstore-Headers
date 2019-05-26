//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTVoiceNowPlayingTrackInfoViewModel : NSObject
{
    _Bool _trackTitleHidden;
    _Bool _artistNameHidden;
    id <SPTVoiceNowPlayingTrackInfoViewModelDelegate> _delegate;
    NSString *_trackTitle;
    NSString *_artistName;
}

@property(nonatomic) _Bool artistNameHidden; // @synthesize artistNameHidden=_artistNameHidden;
@property(nonatomic) _Bool trackTitleHidden; // @synthesize trackTitleHidden=_trackTitleHidden;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(nonatomic) __weak id <SPTVoiceNowPlayingTrackInfoViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateViewModelWithPlayerState:(id)arg1;

@end
