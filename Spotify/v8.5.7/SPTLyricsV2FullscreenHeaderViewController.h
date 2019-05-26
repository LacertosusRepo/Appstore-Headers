//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTLyricsV2FullscreenHeaderView, SPTPlayerTrack;
@protocol GLUEImageLoader;

@interface SPTLyricsV2FullscreenHeaderViewController : UIViewController
{
    SPTPlayerTrack *_track;
    id <GLUEImageLoader> _imageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)updateWithStyle:(id)arg1;
- (void)loadView;
- (id)initWithTrack:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SPTLyricsV2FullscreenHeaderView *view; // @dynamic view;

@end
