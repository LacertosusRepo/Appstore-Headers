//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString, NSURL;
@protocol GLUETheme, SPTLinkDispatcher, SPTLogCenter;

@interface SPTContributingArtistsContextMenuAction : NSObject <SPTContextMenuAction>
{
    NSURL *_url;
    NSURL *_imageURL;
    NSString *_title;
    unsigned long long _index;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTLogCenter> _logCenter;
    id <GLUETheme> _theme;
}

+ (id)contributingArtistsContextMenuActionsForArtistEntities:(id)arg1 linkDispatcher:(id)arg2 logCenter:(id)arg3 theme:(id)arg4;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)logInteractionEvent;
- (id)accessoryView;
- (id)imageStyle;
- (id)placeholderImage;
- (id)performAction;
- (id)initWithURL:(id)arg1 title:(id)arg2 imageURL:(id)arg3 index:(unsigned long long)arg4 linkDispatcher:(id)arg5 logCenter:(id)arg6 theme:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

