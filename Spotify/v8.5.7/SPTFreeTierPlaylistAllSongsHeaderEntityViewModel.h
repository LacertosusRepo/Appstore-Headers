//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierAllSongsHeaderEntityViewModel-Protocol.h"

@class NSString;
@protocol SPTFreeTierAllSongsHeaderEntityViewModelDelegate;

@interface SPTFreeTierPlaylistAllSongsHeaderEntityViewModel : NSObject <SPTFreeTierAllSongsHeaderEntityViewModel>
{
    id <SPTFreeTierAllSongsHeaderEntityViewModelDelegate> _delegate;
    unsigned long long _type;
    NSString *_title;
    NSString *_subtitle;
    NSString *_actionTitle;
}

@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SPTFreeTierAllSongsHeaderEntityViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 actionTitle:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
