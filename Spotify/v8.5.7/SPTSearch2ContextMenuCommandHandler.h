//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"
#import "SPTContextMenuPresenterDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURL;
@protocol EXP_SPTHubInteractionLogger, SPTContextMenuOptions, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTPodcastContextMenuProvider;

@interface SPTSearch2ContextMenuCommandHandler : NSObject <SPTContextMenuPresenterDelegate, EXP_HUBCommandHandler>
{
    id <SPTContextMenuOptions> _contextMenuOptions;
    NSURL *_viewURI;
    NSString *_contextMenuLogContextIphone;
    NSString *_contextMenuLogContextIpad;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <EXP_SPTHubInteractionLogger> _interactionLogger;
    NSMutableSet *_presentedContextMenuPresenters;
}

@property(readonly, nonatomic) NSMutableSet *presentedContextMenuPresenters; // @synthesize presentedContextMenuPresenters=_presentedContextMenuPresenters;
@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, copy, nonatomic) NSString *contextMenuLogContextIpad; // @synthesize contextMenuLogContextIpad=_contextMenuLogContextIpad;
@property(readonly, copy, nonatomic) NSString *contextMenuLogContextIphone; // @synthesize contextMenuLogContextIphone=_contextMenuLogContextIphone;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (_Bool)showTrackContextMenuForCommand:(id)arg1 event:(id)arg2;
- (_Bool)showVideoContextMenuForCommand:(id)arg1 event:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
@property(readonly, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
- (id)initWithViewURI:(id)arg1 contextMenuLogContextIphone:(id)arg2 contextMenuLogContextIpad:(id)arg3 contextMenuOptionsFactory:(id)arg4 contextMenuPresenterFactory:(id)arg5 podcastContextMenuProvider:(id)arg6 interactionLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

