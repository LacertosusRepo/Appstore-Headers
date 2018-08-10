//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPViewController.h"

@class NSString, NSURL;

@interface SPViewController : UIViewController <SPViewController, SPContentInsetViewController>
{
    _Bool _automaticallyAdjustsScrollViewInsets;
    id <NSObject> _statusBarFrameObservation;
}

@property(retain, nonatomic) id <NSObject> statusBarFrameObservation; // @synthesize statusBarFrameObservation=_statusBarFrameObservation;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic) NSURL *URI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

