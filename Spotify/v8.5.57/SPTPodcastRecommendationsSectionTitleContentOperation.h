//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate;

@interface SPTPodcastRecommendationsSectionTitleContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

