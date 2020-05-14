//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAssistedCurationCardStyle;
@protocol GLUEImageLoader, SPTAssistedCurationCardCellConfiguratorDelegate, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory;

@interface SPTAssistedCurationCardCellConfigurator : NSObject
{
    id <SPTAssistedCurationCardCellConfiguratorDelegate> _delegate;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <GLUEImageLoader> _glueImageLoader;
    SPTAssistedCurationCardStyle *_cardStyle;
}

@property(readonly, nonatomic) SPTAssistedCurationCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(nonatomic) __weak id <SPTAssistedCurationCardCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)locationInCollectionForButton:(id)arg1;
- (id)indexPathForButton:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (void)audioPreviewButtonSelected:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2 atIndexPath:(id)arg3 andAddBlock:(CDUnknownBlockType)arg4;
- (void)addTrackAction:(id)arg1;
- (void)setupTrailingAccessoryForCell:(id)arg1 withViewModel:(id)arg2 atIndexPath:(id)arg3 andAddBlock:(CDUnknownBlockType)arg4;
- (void)setupLeadingViewForCell:(id)arg1 withViewModel:(id)arg2 atIndexPath:(id)arg3;
- (void)setupContentViewForCell:(id)arg1;
- (id)initWithAudioPreviewModelFactory:(id)arg1 audioPreviewUIFactory:(id)arg2 glueImageLoader:(id)arg3 andCardStyle:(id)arg4;

@end
