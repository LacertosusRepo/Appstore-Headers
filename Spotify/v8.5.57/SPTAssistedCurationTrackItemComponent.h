//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet, SPTAssistedCurationCardStyle;
@protocol GLUEImageLoader, SPTAgeVerificationProvider, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTExplicitContentAccessManager;

@interface SPTAssistedCurationTrackItemComponent : NSObject <HUBComponent>
{
    SPTAssistedCurationCardStyle *_cardStyle;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) SPTAssistedCurationCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithCardStyle:(id)arg1 audioPreviewModelFactory:(id)arg2 audioPreviewUIFactory:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5 glueImageLoader:(id)arg6;

@end
