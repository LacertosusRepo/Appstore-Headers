//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate;

@interface SPTFreeTierAlbumVISREFHeaderCreatorContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
}

@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

@end

