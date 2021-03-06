//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"

@class NSString, UIColor, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingColorExampleViewController : UIViewController <SPTNowPlayingContainedViewController>
{
    UIViewController<SPTNowPlayingContainingViewController> *container;
    unsigned long long _leadingEdge;
    double _viewControllerPriority;
    double _contentHeight;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double viewControllerPriority; // @synthesize viewControllerPriority=_viewControllerPriority;
@property(nonatomic) unsigned long long leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container; // @synthesize container;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

