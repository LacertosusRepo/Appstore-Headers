//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString;
@protocol GLUEStyleable;

@interface SPTSnackbarView : UIView <GLUEStyleable>
{
    UIView<GLUEStyleable> *_contentView;
}

@property(retain, nonatomic) UIView<GLUEStyleable> *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

