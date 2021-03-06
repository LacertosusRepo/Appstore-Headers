//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSafariViewController.h"

#import "SPTPageController.h"

@class NSString, NSURL;

@interface SPTSafariViewController : SFSafariViewController <SPTPageController>
{
    NSString *_pageIdentifier;
    NSURL *_initialURL;
}

@property(readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 pageIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

