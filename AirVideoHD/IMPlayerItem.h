//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayerItem, IMItemPath, IMPlaybackInitRequest, InMethod_IMItem, NSString, NSURL;

@interface IMPlayerItem : NSObject
{
    _Bool mediaSelectionDirty;
    _Bool needPrepareSegment;
    _Bool canMarkAsPlayed;
    int itemType;
    float initialSeekTime;
    NSURL *url;
    NSString *simpleURLPatternMainContent;
    NSString *simpleURLPatternSubtitles;
    AVAsset *asset;
    AVPlayerItem *playerItem;
    InMethod_IMItem *item;
    IMItemPath *itemPath;
    double segmentLength;
    NSString *playbackId;
    NSString *encryptionKeyPath;
    NSString *playerError;
    IMPlaybackInitRequest *playbackInitRequest;
}

+ (id)deJSONize:(id)arg1;
@property(retain, nonatomic) IMPlaybackInitRequest *playbackInitRequest; // @synthesize playbackInitRequest;
@property(nonatomic) _Bool canMarkAsPlayed; // @synthesize canMarkAsPlayed;
@property(nonatomic) _Bool needPrepareSegment; // @synthesize needPrepareSegment;
@property(retain, nonatomic) NSString *playerError; // @synthesize playerError;
@property(retain, nonatomic) NSString *encryptionKeyPath; // @synthesize encryptionKeyPath;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId;
@property(nonatomic) _Bool mediaSelectionDirty; // @synthesize mediaSelectionDirty;
@property double segmentLength; // @synthesize segmentLength;
@property float initialSeekTime; // @synthesize initialSeekTime;
@property int itemType; // @synthesize itemType;
@property(retain) IMItemPath *itemPath; // @synthesize itemPath;
@property(retain) InMethod_IMItem *item; // @synthesize item;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem;
@property(retain) AVAsset *asset; // @synthesize asset;
@property(retain) NSString *simpleURLPatternSubtitles; // @synthesize simpleURLPatternSubtitles;
@property(retain) NSString *simpleURLPatternMainContent; // @synthesize simpleURLPatternMainContent;
@property(retain) NSURL *url; // @synthesize url;
- (void).cxx_destruct;
- (id)JSONize:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

