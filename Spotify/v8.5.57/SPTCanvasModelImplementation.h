//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasModel-Protocol.h"

@class NSString, NSURL;

@interface SPTCanvasModelImplementation : NSObject <SPTCanvasModel>
{
    NSString *_canvasId;
    NSURL *_contentURL;
    NSString *_contentId;
    unsigned long long _type;
    NSURL *_artistURI;
    NSString *_artistName;
    NSURL *_entityURI;
    NSURL *_canvasURI;
    NSURL *_albumCoverURL;
}

+ (unsigned long long)canvasContentTypeFromString:(id)arg1;
@property(copy, nonatomic) NSURL *albumCoverURL; // @synthesize albumCoverURL=_albumCoverURL;
@property(readonly, copy, nonatomic) NSURL *canvasURI; // @synthesize canvasURI=_canvasURI;
@property(readonly, copy, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCanvasId:(id)arg1 canvasURI:(id)arg2 contentURL:(id)arg3 contentId:(id)arg4 type:(unsigned long long)arg5 artistURI:(id)arg6 artistName:(id)arg7 entityURI:(id)arg8 albumCoverURL:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
