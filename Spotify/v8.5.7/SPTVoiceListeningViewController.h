//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTVoiceListeningViewModel, UIView;

@interface SPTVoiceListeningViewController : UIViewController
{
    SPTVoiceListeningViewModel *_listeningViewModel;
    UIView *_listeningView;
}

@property(retain, nonatomic) UIView *listeningView; // @synthesize listeningView=_listeningView;
@property(readonly, nonatomic) SPTVoiceListeningViewModel *listeningViewModel; // @synthesize listeningViewModel=_listeningViewModel;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

