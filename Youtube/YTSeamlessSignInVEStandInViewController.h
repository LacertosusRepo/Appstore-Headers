//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTGraftingViewController.h"
#import "YTResponder.h"

@class NSString, YTICommand;

@interface YTSeamlessSignInVEStandInViewController : UIViewController <YTGraftingViewController, YTResponder>
{
    YTICommand *_navEndpoint;
    id <YTResponder> _parentResponder;
    int _pageVEType;
}

@property(readonly, nonatomic) int pageVEType; // @synthesize pageVEType=_pageVEType;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (id)navEndpoint;
- (id)initWithParentResponder:(id)arg1 pageVEType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

