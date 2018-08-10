//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierEntityContextMenuButtonViewModel.h"

@class NSDictionary, NSString, NSURL;

@interface SPTFreeTierTrackContextMenuButtonViewModel : NSObject <SPTFreeTierEntityContextMenuButtonViewModel>
{
    id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> _delegate;
    unsigned long long _state;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    NSURL *_viewURI;
    NSDictionary *_metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)contextMenuPresenterWithSenderView:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;
- (void)tapContextMenuButton:(id)arg1;
- (void)configureWithViewURI:(id)arg1 metadata:(id)arg2;
- (id)initWithPresenterFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

