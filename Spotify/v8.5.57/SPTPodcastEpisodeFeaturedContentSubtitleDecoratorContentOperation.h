//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate;

@interface SPTPodcastEpisodeFeaturedContentSubtitleDecoratorContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)prefixForURI:(id)arg1;
- (void)updateSubtitlePrefixIfNeeded:(id)arg1 uri:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

@end

