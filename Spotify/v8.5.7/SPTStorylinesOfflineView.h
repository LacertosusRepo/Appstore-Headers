//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel;

@interface SPTStorylinesOfflineView : UIView
{
    GLUELabel *_offlineLabel;
    GLUELabel *_offlineSublabel;
}

@property(retain, nonatomic) GLUELabel *offlineSublabel; // @synthesize offlineSublabel=_offlineSublabel;
@property(retain, nonatomic) GLUELabel *offlineLabel; // @synthesize offlineLabel=_offlineLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

