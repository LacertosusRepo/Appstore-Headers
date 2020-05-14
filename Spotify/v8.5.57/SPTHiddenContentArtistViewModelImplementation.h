//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHiddenContentArtistViewModel-Protocol.h"

@class NSString, NSURL, UIColor;
@protocol SPTContextMenuActionsProvider, SPTContextMenuOptionsFactory, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTLinkDispatcher;

@interface SPTHiddenContentArtistViewModelImplementation : NSObject <SPTHiddenContentArtistViewModel>
{
    NSURL *_artistImageURL;
    long long _feedbackIcon;
    UIColor *_feedbackIconColor;
    NSString *_title;
    NSURL *_URL;
    id <SPTContextMenuActionsProvider> _contextMenuActionsProvider;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTContextMenuPresenter> _presenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionsProvider; // @synthesize contextMenuActionsProvider=_contextMenuActionsProvider;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIColor *feedbackIconColor; // @synthesize feedbackIconColor=_feedbackIconColor;
@property(readonly, nonatomic) long long feedbackIcon; // @synthesize feedbackIcon=_feedbackIcon;
@property(readonly, nonatomic) NSURL *artistImageURL; // @synthesize artistImageURL=_artistImageURL;
- (void).cxx_destruct;
- (id)createContextMenuTasks;
- (void)presentContextMenuInViewController:(id)arg1 senderView:(id)arg2;
- (void)navigateToArtist;
- (id)initWithArtistEntity:(id)arg1 linkDispatcher:(id)arg2 contextMenuPresenterFactory:(id)arg3 contextMenuActionsProvider:(id)arg4 contextMenuOptionsFactory:(id)arg5 theme:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

