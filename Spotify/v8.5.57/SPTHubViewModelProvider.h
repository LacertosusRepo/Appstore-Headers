//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBViewModelLoaderDelegate-Protocol.h"

@protocol HUBViewModelLoader, SPTHubViewModelProviderDelegate;

@interface SPTHubViewModelProvider : NSObject <HUBViewModelLoaderDelegate>
{
    id <SPTHubViewModelProviderDelegate> _delegate;
    id <HUBViewModelLoader> _viewModelLoader;
}

@property(retain, nonatomic) id <HUBViewModelLoader> viewModelLoader; // @synthesize viewModelLoader=_viewModelLoader;
@property(nonatomic) __weak id <SPTHubViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)loadViewModel;
- (id)initWithViewModelLoader:(id)arg1;

@end

