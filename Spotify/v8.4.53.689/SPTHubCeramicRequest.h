//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicRequest.h"

@class NSString, NSURL, SPTHubViewModel;

@interface SPTHubCeramicRequest : NSObject <SPTCeramicRequest>
{
    id <SPTCeramicRequestDelegate> _ceramicDelegate;
    SPTHubViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTHubViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTCeramicRequestDelegate> ceramicDelegate; // @synthesize ceramicDelegate=_ceramicDelegate;
- (void).cxx_destruct;
- (void)load;
@property(readonly, nonatomic) _Bool shouldReloadWhenOnlineStateChanges;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) id <SPTCeramicSpace> space;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

