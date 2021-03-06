//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubDictionaryTransformable.h"

@class NSString, NSURL, SPTHubButtonData;

@interface SPTHubViewHeaderData : NSObject <SPTHubDictionaryTransformable>
{
    unsigned long long _style;
    NSURL *_backgroundImageURL;
    NSString *_title;
    NSString *_subtitle;
    SPTHubButtonData *_buttonData;
}

@property(readonly, nonatomic) SPTHubButtonData *buttonData; // @synthesize buttonData=_buttonData;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 pathSet:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 backgroundImageURL:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonData:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

