//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCreatePlaylistModelDelegate-Protocol.h"
#import "SPTCreatePlaylistViewModel-Protocol.h"

@class NSString, NSURL, SPTCreatePlaylistLogging;
@protocol SPTCreatePlaylistModel, SPTCreatePlaylistViewModelDelegate, SPTLinkDispatcher;

@interface SPTCreatePlaylistViewModelImplementation : NSObject <SPTCreatePlaylistViewModel, SPTCreatePlaylistModelDelegate>
{
    id <SPTCreatePlaylistViewModelDelegate> delegate;
    id <SPTCreatePlaylistModel> _model;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCreatePlaylistLogging *_logger;
    unsigned long long _numberOfOwnPlaylists;
    NSString *_defaultName;
    NSURL *_renamePlaylistURL;
    NSString *_currentPlaylistName;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *currentPlaylistName; // @synthesize currentPlaylistName=_currentPlaylistName;
@property(retain, nonatomic) NSURL *renamePlaylistURL; // @synthesize renamePlaylistURL=_renamePlaylistURL;
@property(copy, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(nonatomic) unsigned long long numberOfOwnPlaylists; // @synthesize numberOfOwnPlaylists=_numberOfOwnPlaylists;
@property(retain, nonatomic) SPTCreatePlaylistLogging *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTCreatePlaylistModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTCreatePlaylistViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)createPlaylistModel:(id)arg1 didRenamePlaylistWithURL:(id)arg2;
- (void)createPlaylistModel:(id)arg1 didCreatePlaylistWithURL:(id)arg2;
- (void)createPlaylistModel:(id)arg1 didUpdateNumberOfOwnPlaylists:(unsigned long long)arg2;
- (_Bool)allowPlaylistWithName:(id)arg1;
- (void)cancelPlaylistCreation;
- (void)renamePlaylistToName:(id)arg1;
- (void)createPlaylistWithName:(id)arg1;
- (void)loadViewModel;
- (id)initWithModel:(id)arg1 renamePlaylistURL:(id)arg2 currentPlaylistName:(id)arg3 linkDispatcher:(id)arg4 logger:(id)arg5;
- (id)initWithModel:(id)arg1 linkDispatcher:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
