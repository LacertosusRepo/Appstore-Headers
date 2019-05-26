//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, NSString;

@interface SPTFreeTierPlaylistHeaderPlaceholder : UIView <GLUEStyleable>
{
    _Bool _hasAppliedStyle;
    GLUEImageView *_entityImageView;
}

@property(nonatomic) _Bool hasAppliedStyle; // @synthesize hasAppliedStyle=_hasAppliedStyle;
@property(retain, nonatomic) GLUEImageView *entityImageView; // @synthesize entityImageView=_entityImageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
