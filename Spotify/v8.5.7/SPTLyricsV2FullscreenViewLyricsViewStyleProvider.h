//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsV2LyricsViewStyleProvider-Protocol.h"

@class NSString, SPTLyricsV2Colors;
@protocol GLUETheme;

@interface SPTLyricsV2FullscreenViewLyricsViewStyleProvider : NSObject <SPTLyricsV2LyricsViewStyleProvider>
{
    _Bool _isLyricsEastAsian;
    _Bool _isVocalRemovalActive;
    id <GLUETheme> _glueTheme;
    SPTLyricsV2Colors *_colors;
}

@property(nonatomic) _Bool isVocalRemovalActive; // @synthesize isVocalRemovalActive=_isVocalRemovalActive;
@property(nonatomic) _Bool isLyricsEastAsian; // @synthesize isLyricsEastAsian=_isLyricsEastAsian;
@property(retain, nonatomic) SPTLyricsV2Colors *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
- (void).cxx_destruct;
- (id)lyricsViewStyle;
- (id)initWithTheme:(id)arg1 colors:(id)arg2 isLyricsEastAsian:(_Bool)arg3 isVocalRemovalActive:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

