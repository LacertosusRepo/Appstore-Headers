//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "GLUEReusable-Protocol.h"

@class UIView;
@protocol GLUEReusable;

@interface SPTHomeMixEntityRowActionButton : UIControl <GLUEReusable>
{
    UIView<GLUEReusable> *_customView;
}

@property(nonatomic) __weak UIView<GLUEReusable> *customView; // @synthesize customView=_customView;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end

